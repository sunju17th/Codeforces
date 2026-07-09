#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric> // Cho std::iota

using namespace std;
using ll = long long;

// Struct Cây Fenwick (BIT)
struct Fenwick {
    int n;
    vector<ll> bit;
    Fenwick() {}
    Fenwick(int n_): n(n_), bit(n_ + 1, 0) {}
    void init(int n_) { n = n_; bit.assign(n + 1, 0); }
    
    void add(int idx, ll val) {
        for (; idx <= n; idx += idx & -idx) bit[idx] += val;
    }
    
    ll sumPrefix(int idx) {
        ll s = 0;
        for (; idx > 0; idx -= idx & -idx) s += bit[idx];
        return s;
    }
    
    ll sumRange(int l, int r) {
        if (r < l) return 0;
        return sumPrefix(r) - sumPrefix(l - 1);
    }
};

// Struct Disjoint Set Union (DSU)
struct DSU {
    int n;
    vector<int> parent;
    vector<int> sz; // sz[root] = ð? dài c?a ðo?n
    DSU() {}
    void init(int n_) {
        n = n_;
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0); // parent[i] = i
        sz.assign(n, 0);
    }
    
    int find(int x) {
        return parent[x] == x ? x : parent[x] = find(parent[x]);
    }
    
    // Ð?t ð? dài ban ð?u (luôn là 1)
    void setSize(int x, int v) {
        sz[find(x)] = v;
    }
    
    int getSize(int x) {
        return sz[find(x)];
    }
    
    // H?p nh?t a và b, tr? v? nút g?c m?i
    int unite(int a, int b) {
        int ra = find(a), rb = find(b);
        if (ra == rb) return ra;
        if (sz[ra] < sz[rb]) swap(ra, rb); // G?p nhóm nh? vào nhóm l?n
        parent[rb] = ra;
        sz[ra] += sz[rb];
        return ra;
    }
};

// Hàm ti?n x? l?: Tính max_len_down (gi?ng compute_max_len ? code RE)
vector<int> compute_max_len_down(int n, int m, int k, const vector<string>& grid) {
    vector<int> L(n * m);
    for (int c = 0; c < m; ++c) { // Duy?t t?ng c?t
        int stone_count = 0;
        int r2 = 0; // Con tr? cu?i c?a s?
        for (int r1 = 0; r1 < n; ++r1) { // Con tr? ð?u c?a s?
            // M? r?ng r2 xa nh?t có th?
            while (r2 < n && stone_count + (grid[r2][c] == '#') <= k) {
                stone_count += (grid[r2][c] == '#');
                r2++;
            }
            // Ðo?n [r1, r2-1] là h?p l?
            L[r1 * m + c] = r2 - r1;
            // D?ch r1, gi?m s? ðá
            stone_count -= (grid[r1][c] == '#');
        }
    }
    return L;
}

// C?u trúc lýu truy v?n
struct Query { int w, h, k, idx; };
// C?u trúc lýu ô
struct Cell { 
    int len, r, c; 
    // S?p x?p gi?m d?n theo len
    bool operator>(const Cell& other) const {
        return len > other.len;
    }
};

// Các bi?n toàn c?c cho c?u trúc d? li?u
DSU dsu;
Fenwick bitCnt, bitSum;
vector<bool> active;

// Hàm kích ho?t và h?p nh?t (ph?n chính)
void activate_and_merge(int r, int c, int m) {
    int id = r * m + c;
    active[id] = true;
    dsu.setSize(id, 1);
    
    // Thêm ðo?n m?i L=1
    bitCnt.add(1, 1);
    bitSum.add(1, 1);

    int current_root = id;
    int current_len = 1;

    // 1. Ki?m tra và h?p nh?t BÊN TRÁI
    if (c > 0 && active[id - 1]) {
        int left_root = dsu.find(id - 1);
        int left_len = dsu.getSize(left_root);

        // Xóa 2 ðo?n c? (ðo?n trái và ðo?n hi?n t?i)
        bitCnt.add(left_len, -1);
        bitSum.add(left_len, -left_len);
        bitCnt.add(current_len, -1);
        bitSum.add(current_len, -current_len);

        // H?p nh?t và c?p nh?t
        current_root = dsu.unite(left_root, current_root);
        current_len = dsu.getSize(current_root);

        // Thêm ðo?n m?i ð? g?p
        bitCnt.add(current_len, 1);
        bitSum.add(current_len, current_len);
    }

    // 2. Ki?m tra và h?p nh?t BÊN PH?I
    if (c < m - 1 && active[id + 1]) {
        int right_root = dsu.find(id + 1);
        int right_len = dsu.getSize(right_root);

        // Xóa 2 ðo?n c? (ðo?n ph?i và ðo?n hi?n t?i (có th? ð? g?p v?i trái))
        bitCnt.add(right_len, -1);
        bitSum.add(right_len, -right_len);
        bitCnt.add(current_len, -1);
        bitSum.add(current_len, -current_len);

        // H?p nh?t và c?p nh?t
        current_root = dsu.unite(current_root, right_root);
        current_len = dsu.getSize(current_root);

        // Thêm ðo?n m?i ð? g?p
        bitCnt.add(current_len, 1);
        bitSum.add(current_len, current_len);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, q;
    cin >> n >> m >> q;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) cin >> grid[i];

    vector<Query> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i].w >> queries[i].h >> queries[i].k;
        queries[i].idx = i;
    }

    // Phân lo?i truy v?n theo k
    vector<vector<Query>> byK(6);
    for (const auto &qq : queries) {
        if (qq.k <= 5) {
            byK[qq.k].push_back(qq);
        }
    }

    vector<long long> ans(q, 0);
    int Ncells = n * m;

    // X? l? t?ng nhóm k
    for (int k = 0; k <= 5; ++k) {
        if (byK[k].empty()) continue;

        // 1. Tính max_len cho k hi?n t?i
        vector<int> L = compute_max_len_down(n, m, k, grid);

        // 2. Chu?n b? các ô
        vector<Cell> cells;
        cells.reserve(Ncells);
        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < m; ++c) {
                cells.push_back({L[r * m + c], r, c});
            }
        }
        // S?p x?p ô gi?m d?n theo max_len
        sort(cells.begin(), cells.end(), greater<Cell>());

        // 3. S?p x?p các truy v?n cho k này
        auto listQ = byK[k];
        sort(listQ.begin(), listQ.end(), [](const Query &a, const Query &b){
            return a.w > b.w; // S?p x?p gi?m d?n theo w
        });

        // 4. Kh?i t?o c?u trúc d? li?u
        dsu.init(Ncells);
        active.assign(Ncells, false);
        bitCnt.init(m);
        bitSum.init(m);

        // 5. Quét (Sweep-line)
        int cell_ptr = 0; // Con tr? tr? ð?n ô
        for (const auto &qq : listQ) {
            // Kích ho?t t?t c? các ô có max_len >= w
            while (cell_ptr < cells.size() && cells[cell_ptr].len >= qq.w) {
                const auto& cell = cells[cell_ptr];
                activate_and_merge(cell.r, cell.c, m);
                cell_ptr++;
            }

            // Tr? l?i truy v?n
            ll total_sum = bitSum.sumRange(qq.h, m);
            ll total_count = bitCnt.sumRange(qq.h, m);
            
            // ans = sum(L - h + 1) = sum(L) - sum(h-1) = sum(L) - count * (h-1)
            ans[qq.idx] = total_sum - total_count * (qq.h - 1);
        }
    }

    // In k?t qu?
    for (int i = 0; i < q; ++i) {
        cout << ans[i] << '\n';
    }
    return 0;
}

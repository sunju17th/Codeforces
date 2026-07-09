#include <iostream>
#include <vector>
#include <numeric>
#include <set>
#include <algorithm>

using namespace std;

// Hàm ki?m tra xem GCD 'g' có kh? thi v?i 'k' lý?t xóa hay không
bool check(int g, int k, const vector<int>& a) {
    if (g == 0) return false;

    int n = a.size();
    int cost = 0;         // S? lý?t "Erase" b?t bu?c
    int good_count = 0;   // S? lý?ng s? "T?t" ho?c "Gi? l?i"
    bool all_are_2g = true; // C? cho trý?ng h?p [4, 4] v?i g=2

    for (int x : a) {
        if (x > 2 * g) {
            // "T?t": Có th? Tách thành (g, g)
            good_count++;
            all_are_2g = false;
        } else if (x == g) {
            // "Gi? l?i": Ð? là g
            good_count++;
            all_are_2g = false;
        } else if (x == 2 * g) {
            // "Gi? l?i": Là 2g, không th? Tách
            good_count++;
            // all_are_2g v?n có th? là true
        } else {
            // "X?u": (x < g) ho?c (x <= 2g và x % g != 0)
            // B?t bu?c ph?i Xóa
            cost++;
        }
    }

    // 1. Ki?m tra chi phí Xóa
    if (cost > k) return false;

    // 2. Ki?m tra b?ng r?ng
    if (good_count == 0) return false;

    // 3. Ki?m tra trý?ng h?p ngo?i l? 2g
    // N?u t?t c? các s? "Gi? l?i" ð?u là 2g, GCD s? là 2g, không ph?i g.
    if (all_are_2g) return false;

    // N?u qua t?t c? các bý?c, g là kh? thi
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    set<int> candidates;
    candidates.insert(1); // 1 luôn là m?t ?ng c? viên

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        // Thêm các ði?m "quan tr?ng" vào t?p ?ng c? viên
        candidates.insert(a[i]);
        if (a[i] / 2 > 0) {
            candidates.insert(a[i] / 2);
        }
        candidates.insert(a[i] / 2 + 1);
    }

    int max_g = 0;

    // Chuy?n set sang vector ð? duy?t gi?m d?n (hi?u qu? hõn)
    vector<int> g_values(candidates.begin(), candidates.end());
    
    // Duy?t gi?m d?n ð? t?m g l?n nh?t
    for (int i = g_values.size() - 1; i >= 0; --i) {
        int g = g_values[i];
        if (check(g, k, a)) {
            max_g = g;
            break; // Ð? t?m th?y g l?n nh?t
        }
    }
    cout << max_g << "\n";
}

int main() {
    // Tãng t?c I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

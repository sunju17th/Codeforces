#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> g;

// --- t?m chu tr?nh ðõn (DFS with parent + back-edge) ---
vector<int> parent_;
vector<int> color; // 0 un, 1 visiting, 2 done
vector<int> cycle; // lýu các ð?nh trên chu tr?nh theo th? t?

bool dfs_find_cycle(int u, int p) {
    color[u] = 1;
    parent_[u] = p;
    for (int v : g[u]) {
        if (v == p) continue;
        if (color[v] == 0) {
            if (dfs_find_cycle(v, u)) return true;
        } else if (color[v] == 1) {
            // t?m th?y back-edge u -> v => có chu tr?nh
            int cur = u;
            cycle.push_back(v);
            while (cur != v) {
                cycle.push_back(cur);
                cur = parent_[cur];
            }
            reverse(cycle.begin(), cycle.end()); // bây gi? cycle theo th? t? d?c theo chu tr?nh
            return true;
        }
    }
    color[u] = 2;
    return false;
}

// --- tính depth (max distance xu?ng lá) cho cây g?c t?i u, tránh các ð?nh inCycle ---
vector<char> inCycle;
int dfs_depth(int u, int p) {
    int best = 0;
    for (int v : g[u]) {
        if (v == p) continue;
        if (inCycle[v]) continue; // không ði vào chu tr?nh
        best = max(best, 1 + dfs_depth(v, u));
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    g.assign(n+1, {});
    for (int i = 0; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    parent_.assign(n+1, -1);
    color.assign(n+1, 0);
    // t?m chu tr?nh (b?t ð?u t? 1 v? ð? th? liên thông)
    dfs_find_cycle(1, -1);

    int k = (int)cycle.size();
    inCycle.assign(n+1, 0);
    for (int x : cycle) inCycle[x] = 1;

    // tính depth cho t?ng ð?nh trên chu tr?nh theo th? t? cycle[0..k-1]
    vector<int> val(k);
    for (int i = 0; i < k; ++i) {
        val[i] = dfs_depth(cycle[i], -1);
    }

    // trý?ng h?p ð?c bi?t: n?u k == 0 (không t?m th?y) - theo ð? không x?y ra v? có ðúng 1 chu tr?nh
    if (k == 0) {
        cout << 1 << "\n";
        return 0;
    }

    // tính t?i ða 2*val[i] (ðý?ng n?m hoàn toàn trong m?t cây g?n vào chu tr?nh)
    long long ansEdges = 0;
    for (int i = 0; i < k; ++i) ansEdges = max(ansEdges, 2LL * val[i]);

    // nhân ðôi m?ng val ð? x? l? theo ki?u "v?ng"
    vector<long long> val2(2*k);
    for (int i = 0; i < 2*k; ++i) val2[i] = val[i % k];

    // chúng ta mu?n maximize val2[i] + val2[j] + (j - i), v?i 0 <= i < j < i + k
    // => v?i c? ð?nh j, c?n max over i in [j - (k-1), j-1] c?a (val2[i] - i)
    deque<int> dq;
    int window = k - 1;
    for (int j = 0; j < 2*k; ++j) {
        // lo?i b? các i không n?m trong window
        while (!dq.empty() && dq.front() < j - window) dq.pop_front();

        if (!dq.empty()) {
            long long best_i = val2[dq.front()] - dq.front();
            long long cand = val2[j] + j + best_i;
            ansEdges = max(ansEdges, cand);
        }

        // chèn j nhý m?t ?ng viên i cho các j' > j
        long long key = val2[j] - j;
        while (!dq.empty() && (val2[dq.back()] - dq.back()) <= key) dq.pop_back();
        dq.push_back(j);
    }

    long long answerVertices = ansEdges + 1; // convert edges -> vertices
    cout << answerVertices << "\n";
    return 0;
}


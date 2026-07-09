#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
vector<pair<int,int>> adj[MAXN+1];
long long xr[MAXN+1]; 

void dfs(int u, int p) {
    for (auto &edge : adj[u]) {
        int v = edge.first;
        int w = edge.second;
        if (v == p) continue;
        xr[v] = xr[u] ^ w;   
        dfs(v, u);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 1; i < N; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dfs(1, 0); 
    
    long long ans = 0;
    for (int bit = 0; bit < 26; bit++) {
        long long cnt1 = 0;
        for (int i = 1; i <= N; i++) {
            if (xr[i] & (1LL << bit))
                cnt1++;
        }
        long long cnt0 = N - cnt1;
        ans += cnt1 * cnt0 * (1LL << bit);
    }

    cout << ans << "\n";
    return 0;
}


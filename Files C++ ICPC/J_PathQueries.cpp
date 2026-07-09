#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
int depth[MAXN];
int parent[MAXN][17]; // For LCA

void dfs(int node, int par) {
    parent[node][0] = par;
    for (int i = 1; i < 17; ++i) {
        parent[node][i] = parent[parent[node][i - 1]][i - 1];
    }
    for (int neighbor : adj[node]) {
        if (neighbor != par) {
            depth[neighbor] = depth[node] + 1;
            dfs(neighbor, node);
        }
    }
}

int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    for (int i = 16; i >= 0; --i) {
        if (depth[u] - (1 << i) >= depth[v]) {
            u = parent[u][i];
        }
    }
    if (u == v) return u;
    for (int i = 16; i >= 0; --i) {
        if (parent[u][i] != parent[v][i]) {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

bool on_path(int u, int v, int a) {
    int l = lca(u, v);
    return lca(u, a) == a || lca(v, a) == a;
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0); // Start DFS from node 1

    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (on_path(x, y, z)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


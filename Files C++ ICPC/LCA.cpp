#include<bits/stdc++.h>
using namespace std;
int n, q, depth[100005], T[100005][17];
vector<int> adj[100005];
void dfs(int u, int p) { ///tim to tien o tang tren cua u
	depth[u] = depth[p] + 1;
	T[u][0] = p;
	for(int i = 1; i < 17; i++)
		T[u][i] = T[T[u][i - 1]][i - 1];
	for(int v : adj[u]) {
	if(v == p)
		continue;
	dfs(v, u);
	}
}
int lca(int u, int v) { ///Tim LCA Sparse Table
	if(depth[u] < depth[v])
		swap(u, v);
	for(int i = 16; i >= 0; i--) ///nhay den cung do sau
		if(depth[T[u][i]] >= depth[v])
	u = T[u][i];
	if(u == v)
		return u;
	for(int i = 16; i >= 0; i--)///nhay den LCA
		if(T[u][i] != T[v][i]) {
			u = T[u][i];
			v = T[v][i];
 	}
return T[u][0];
}
main() {
	cin >> n;
	for(int i = 1; i < n; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1, 0);
	cin >> q;
	while(q--) {
		int u, v;
		cin >> u >> v;
		cout << "lca(" << u << "," << v << ")=" << lca(u, v) << "\n";
	}
}
//13
//1 2
//1 3
//1 4
//3 5
//3 6
//3 7
//6 8
//6 9
//7 10
//7 11 
//10 12
//10 13
//6
//2 4
//12 13
//2 5
//8 9
//12 11
//6 7

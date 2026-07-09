#include<iostream>
using namespace std;

int parent[100005];

void make_set(int u) {
    parent[u] = u;
}

bool find_parent(int u, int v) {
    if (v == parent[v] && u != v) 
        return false;
    else 
    {
    	v = parent[v];
		if(v == u) return true;
	}
    return find_parent(u,parent[v]);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        make_set(i);

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        parent[y] = x;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if (find_parent(u,v) == true) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}


#include<iostream>

using namespace std;

int parent[500001];

void make_set(int u){
 	parent[u] = u;
}


int find_set(int u){
 	if(u == parent[u]) return u;
 	return parent[u] = find_set(parent[u]);
}


void union_set(int u, int v){
 	u = find_set(u);
 	v = find_set(v);
 	if(u == v) return;
 	parent[u] = v;
}

int main()
{
	long n, q, t;
	cin >> n >> q >> t;
	
	for(int i=1;i<=n;i++) make_set(i);
	
	for(int i=0;i<q;i++)
	{
		int x, y;
		cin >> x >> y;
		union_set(x,y);
	}
	
	for(int i=0;i<n;i++)
	{
		int u, v;
		cin >> u >> v;
		
		if(find_set(u)==find_set(v))
			cout << "YES" << endl;
		else
			cout << "NO" <<endl;
	}
}



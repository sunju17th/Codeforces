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
	int n, q;
	cin >> n >> q;
	for(int i=1;i<=n;i++)
		make_set(i);
	for(int i=0;i<q;i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if(x==1) 
		{
			union_set(y,z);
		}
		else
		{
			if(find_set(y)==find_set(z))
				cout << "YES" << endl;
			else
				cout << "NO" <<endl;
		}
	}
}



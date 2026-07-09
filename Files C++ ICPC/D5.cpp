#include<bits/stdc++.h>

using namespace std;

const int MaxN = 1 + 1e6;

int n, m, parent[MaxN],sum[MaxN]={0}, s=0;

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
 	parent[v] = u;
}


int main(){
	cin >> m >> n;
	for(int i = 1 ; i <= m ; i++) make_set(i);
	while(n--){
		int x, y;
		cin  >> x >> y;
		union_set(x,y);
	}
	for(int i=1;i<=m;i++)
	{
		if(parent[i] == i) s++;
	}
	cout << s;
	
}



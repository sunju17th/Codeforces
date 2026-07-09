#include<bits/stdc++.h>

using namespace std;

int n, m;

bool visited[100005];
vector <int> a[100005];
int par[100005];
int d[100005];

void bfs()
{
	for(int i=1;i<n;i++)
	{
		visited[i] = false;
		par[i] = -1;
	}
		
	
	queue <int> q;
	q.push(1);
	visited[1] = true;
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop(); 
		
		for(int i=0;i<a[x].size();i++)
		{
			int y = a[x][i];
			if(visited[y] == true) continue;
			
			par[y] = x;
			
			visited[y] = true;
			q.push(y);
			d[y] = d[x] + 1;
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	bfs();
	for(int i=1;i<=n;i++)
		cout << par[i] << " ";
	
	
	int ans = -1;
}



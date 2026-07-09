#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;

vector <int> d[MAXN]; 
bool a[MAXN] = {0};
bool b[MAXN] = {0};

void bfs(int A, bool a[])
{
	queue <int> q;
	q.push(A);
	a[A] = true;
	
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		
		for(int i = 0;i<d[x].size();i++)
		{
			if(a[d[x][i]] == false)
			{
				q.push(d[x][i]);
				a[d[x][i]] = true;
			}
		}
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		int x, y;
		cin >> x >> y;
		d[x].push_back(y);
	}
	
	int A, B;
	cin >> A >> B;
	
	bfs(A, a);
	bfs(B, b);
	
	for(int i=1;i<=n;i++)
	{
		if(a[i] == b[i] && b[i] == true)
		{
			cout << "yes " <<endl<< i;
			return 0;
		}
	}
		
	cout << "no";
}



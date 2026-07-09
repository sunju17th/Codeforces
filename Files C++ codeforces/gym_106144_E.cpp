#include<bits/stdc++.h>

using namespace std;

vector <string> a;
vector<vector<bool> > b;
vector<vector<int> > c;

int n, m, k;

int ans = 0;

void valid()
{
	c.assign(n, vector<int>(m, 1));
	
	for(int i=n-1;i>=0;i--)
	{
		for(int j=m-1;j>=0;j--)
		{
			if(a[i][j] == 'x') c[i][j] = 0;
			else if(i<n-1) c[i][j] = c[i+1][j] + 1;
		}
	}
	
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout << c[i][j] <<" ";
		}
		cout << endl;
	} */
}

bool check(int x, int y)
{
	if(b[x][y] == true) return false;
	if(c[x][y] >= k) return true;
	return false;
}

void bfs()
{
	b.assign(n, vector<bool>(m, false));
	
	queue <pair<int, int> > q;
	q.push({0, 0});
	b[0][0] = true;

	ans = 0; 
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		
		q.pop();
		
		if(y>=1 && check(x,y-1))
		{
			q.push({x,y-1});
			b[x][y-1] = true;
			ans = max(ans,x);
		}
		if(y<m-1 && check(x,y+1))
		{
			q.push({x,y+1});
			b[x][y+1] = true;
			ans = max(ans,x);
		}
		if(x+k-1<n-1 && check(x+1,y))
		{
			q.push({x+1,y});
			b[x+1][y] = true;
			ans = max(ans,x+1);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m >> k;
		a.resize(n);
		
		for(int i=0;i<n;i++)
			cin >> a[i];
			
		valid();
		bfs();
		cout << ans + k  << endl;
	 } 
}



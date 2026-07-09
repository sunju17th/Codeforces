#include<bits/stdc++.h>

using namespace std;
int n, m;
int L, R, ans = 1;
char a[2001][2001];
long long l[2001][2001];
long long r[2001][2001];
bool visit[2001][2001];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void bfs(int sx, int sy)
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			visit[i][j] = false;
			l[i][j] = 1e9;
			r[i][j] = 1e9;
		}
	deque <pair<int, int> > dq;
	
	dq.push_front({sx, sy});
	visit[sx][sy] = true;
	
	l[sx][sy] = L;
	r[sx][sy] = R;
	
	while(!dq.empty())
	{
		int x = dq.front().first;
		int y = dq.front().second;
		dq.pop_front();
		
		for(int i=0;i<4;i++)
		{
			int X = x + dx[i];
			int Y = y + dy[i];
			
			
			if(X>n || Y>m || X<=0 || Y<=0) continue;
			if(a[X][Y] == '*') continue;
 			if(visit[X][Y] == false) 
			{	
				visit[X][Y] = true;
				if(dy[i] == 1)
				{
					r[X][Y] = r[x][y] - 1;
					l[X][Y] = l[x][y];
					dq.push_back({X,Y});
				}
				else if(dy[i] == -1)
				{
					l[X][Y] = l[x][y] - 1;
					r[X][Y] = r[x][y];
					dq.push_back({X,Y});
				} 
				else 
				{
					r[X][Y] = r[x][y];
					l[X][Y] = l[x][y];
					dq.push_front({X,Y});
				}
				if(r[X][Y] >= 0 && l[X][Y] >=0 ) 
				{
					ans++;
				//	cout << X << " " << Y << " " << ans << endl;
				}
			}
		}
		/*cout << "------L---------"<<endl;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout << l[i][j] <<" ";
			}
			cout << endl;
		}
		cout << "-------R--------"<<endl;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cout << r[i][j] <<" ";
			}
			cout << endl;
		}*/
	}
}

int main()
{
	cin >> n >> m;
	int sx, sy;
	cin >> sx >> sy;
	cin >> L >> R;
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin >> a[i][j];
			
	bfs(sx,sy);
	
	cout << ans;
}



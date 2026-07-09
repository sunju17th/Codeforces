#include<bits/stdc++.h>

using namespace std;

int r, c;
char a[102][102];
bool v[102][102];
int d[102][102]; 

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void bfs(int sx, int sy)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			v[i][j] = false;
			d[i][j] = 0;
		}
	}
	
	queue <pair<int, int> > q;
	q.push({sx, sy});
	v[sx][sy] = false;
	
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		v[x][y] = true;
		
		
		for(int i=0;i<4;i++)
		{
			int X = x+dx[i];
			int Y = y+dy[i];
			
			
			if (a[x][y] == 'B') return;
			if(X>=r || X<0) continue;
			if(Y>=c || Y<0) continue;
			if(a[X][Y] =='*') continue;
			
			if(v[X][Y] == false)
			{
				q.push({X,Y});
				d[X][Y] = d[x][y] + 1;
				v[X][Y] = true;
			}
		}
	}
}

int main()
{
	int sx, sy, tx, ty;
	cin >> r >> c;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			cin >> a[i][j];
			if(a[i][j] == 'C')
			{
				sx = i;
				sy = j;
			}
			if(a[i][j] == 'B')
			{
				tx = i;
				ty = j;
			}
		}
		
	bfs(sx, sy);
	
	cout << d[tx][ty];
			
}



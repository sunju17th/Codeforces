#include<iostream>
#include<queue>

using namespace std;

long long a[105][105];
bool kt[105][105]={false};
long long result, maxresult=0;

struct dao
{
	int x;
	int y;
} ;

queue <dao> d;

int main()
{
	int m, n;
	
	cin >> m >> n;
	for(int i=0;i<=m+1;i++)
	{
		for(int j=0;j<=n+1;j++)
		{
			if(i==0||i==m+1||j==0||j==n+1)
			{
				a[i][j]=-1;
				kt[i][j]=true;
			}
			else
			{
				cin >> a[i][j];
				if(a[i][j]==-1)
					kt[i][j]=true;
			}
		}
	}
	

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(kt[i][j]==false)
			{
				result = 0;
				d.push({i,j});
				
				
				while(!d.empty())
				{
					int x1=d.front().x;
					int y1=d.front().y;
					
					d.pop();
					kt[x1][y1]=true;
					result += a[x1][y1];
					
					if(kt[x1-1][y1]==false)
					{
						d.push({x1-1,y1});
						kt[x1-1][y1]=true;
					}
					if(kt[x1+1][y1]==false)
					{
						d.push({x1+1,y1});
						kt[x1+1][y1]=true;
					}
						
					if(kt[x1][y1-1]==false)
					{
						d.push({x1,y1-1});
						kt[x1][y1-1]=true;
					}
						
					if(kt[x1][y1+1]==false)
					{
						d.push({x1,y1+1});
						kt[x1][y1+1]=true;
					}
					
				}
				maxresult = max(maxresult,result);
			}
				
		}
	}
	cout << maxresult;
}

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<long> a[1000007];

bool b[1000007]={false};
long c[10000007]={0};
long s=0;

long dfs(long x)
{
	b[x]=true;
	c[x]=c[x]+s;
	for(int i=0;i<a[x].size();i++)
	{
		if(b[a[x][i]]==false)
		{
			s++;
			dfs(a[x][i]);
		}
	}
}

int main()
{
	long n, m, max=1;
	
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		long x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	cout << "Graph… in/out:"<< endl;
	dfs(1);
	for(int i=1;i<=n;i++)
	{
		cout << c[i] << " ";
		if(c[max]<c[i])
		{
			max=i;
		}
	}
	cout << endl; 
	memset(b, false, n);
	s=1;
	dfs(max);
	for(int i=1;i<=n;i++)
	{
		cout << c[i] << " ";
	}
 } 

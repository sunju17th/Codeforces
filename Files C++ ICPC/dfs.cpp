#include<iostream>
#include<vector>

using namespace std;

vector<long> a[100000];

bool b[1000007]={0};

int dfs(long x)
{
	b[x]=true;
	cout << x << " ";
	for(long i=0;i<a[x].size();i++)
	{
		if(b[a[x][i]]==false)
		{
			dfs(a[x][i]);
		}
	}
}

int main()
{
	long n, m;
	cin >> n >> m;
	for(int i=0;i<m;i++)
	{
		long x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	dfs(1);
}

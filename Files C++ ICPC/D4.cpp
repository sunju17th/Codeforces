#include<iostream>
#include<vector>

using namespace std;

int s[3000005];
vector<long> a[3000005];
bool b[3000005]={0};
long minx;

int dfs(long x)
{
	b[x]=true;
	for(long i=0;i<a[x].size();i++)
	{
		if(b[a[x][i]]==false)
		{
			if(minx>s[a[x][i]]) minx=s[a[x][i]];
			dfs(a[x][i]);
		}
	}
}


int main()
{
	int n, q;
	cin >> n >> q;
	for(int i=1;i<=n;i++)
		cin >> s[i];
	for(int j=0;j<q;j++)
	{
		int x, y;
		cin >> x >> y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(b[i]!=true)
		{
			minx=s[i];
			dfs(i);
			cout << minx << endl;
		}
	}
			
}



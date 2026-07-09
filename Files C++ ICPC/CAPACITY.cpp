#include<iostream>

using namespace std;

long long bt[100005][2];
long long td[100005];

int main()
{
	long n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> td[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin >> bt[i][1] >> bt[i][2];
	}
	for(int i=1;i<=n;i++)
	{
		long long m=td[i];
		td[i]=0;
		for(int j=1;j<=n;j++)
		{
			if(bt[j][1]<=m)
			{
				td[i]=td[i]+bt[j][2];
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout << td[i] <<" ";
	}
}

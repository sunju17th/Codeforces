#include<iostream>

using namespace std;

int a[10007][10007];
int b[10007][10007]={0};

int main()
{
	long n, m, t, mv=0, mx=0, mt=0, mh=0;
	cin >> n >> m;
	for(long i=1;i<=n;i++)
	{
		for(long j=1;j<=m;j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> t;
	for(long p=0;p<t;p++)
	{
		long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		b[x1][y1]++;
		b[x2+1][y1]--;
		b[x1][y2+1]--;
		b[x2+1][y2+1]++;
	}
	for(long i=1;i<=n;i++)
	{
		for(long j=2;j<=m;j++)
		{
			b[i][j]=b[i][j]+b[i][j-1];
		}
	}
	for(long i=1;i<=n;i++)
	{
		for(long j=2;j<=m;j++)
		{
			b[j][i]=b[j][i]+b[j-1][i];
		}
	}
	for(long i=1;i<=n;i++)
	{
		for(long j=1;j<=m;j++)
		{
			a[i][j]=(a[i][j]+b[i][j])%4;
			if(a[i][j]==0) mv++;
			if(a[i][j]==1) mx++;
			if(a[i][j]==2) mh++;
			if(a[i][j]==3) mt++;
		}
	}
	cout << mv << " " << mx << " " << mh <<" "<<mt;
} 


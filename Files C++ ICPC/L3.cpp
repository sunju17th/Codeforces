#include<iostream>

using namespace std;

long long a[1002][1002]={0},temp[1002][1002]={0};

int main()
{
	long n, m, q;
	cin >> n >> m >> q;
	for(long i=1;i<=n;i++)
	{
		for(long long j=1;j<=m;j++)
		{
			cin >> a[i][j];
		}
	}
	for(long i=0;i<q;i++)
	{
		long xl, yl, xr, yr, l;
		cin >> xl >> yl >> xr >> yr >> l;
		
		temp[xl][yl]+=l;
		temp[xl][yr+1]-=l;
		temp[xr+1][yl]-=l;
		temp[xr+1][yr+1]+=l;
	}
	
	for(long i=1;i<=n;i++)
	{
		for(long j=1;j<=m;j++)
		{
			temp[i][j]=temp[i-1][j]+temp[i][j];
		}
	}
	
	
	for(long j=1;j<=m;j++)
	{
		for(long i=1;i<=n;i++)
		{
			temp[i][j]=temp[i][j-1]+temp[i][j];
			
			a[i][j]+=temp[i][j];
		}
	}
	
	
	for(long i=1;i<=n;i++)
	{
		for(long j=1;j<=m;j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
	
}



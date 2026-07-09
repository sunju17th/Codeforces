#include<iostream>

using namespace std;

long long a[1000007][5];

int main()
{
	long n;
	cin >> n;
	for(long i=1;i<=n;i++)
	{
		cin >> a[i][0];
	}
	for(long i=1;i<=n;i++)
	{
		if(i==1) a[1][1]=a[1][0];
		else
		{
			a[i][1]=max(a[i-1][1],a[i][0]);
		}
	}
	for(long i=2;i<=n;i++)
	{
		if(i==2) a[2][2]=a[1][0]-a[2][0];
		else
		{
			a[i][2]=max(a[i-1][2],a[i-1][1]-a[i][0]);
		}
	}
	for(long i=3;i<=n;i++)
	{
		if(i==3) a[3][3]=a[1][0]-a[2][0]+a[3][0];
		else
		{
			a[i][3]=max(a[i-1][3],a[i-1][2]+a[i][0]);
		}
	}
	for(long i=4;i<=n;i++)
	{
		if(i==4) a[4][4]=a[1][0]-a[2][0]+a[3][0]-a[4][0];
		else
		{
			a[i][4]=max(a[i-1][4],a[i-1][3]-a[i][0]);
		}
	}
	cout << a[n][4];
}

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

vector <long long> a[1007];
long long x[300005][1003];

int main()
{
	long n, k;
	
	cin >> n >> k;
	
	for(long i=0;i<n;i++)
	{
		long long x;
		cin >> x;
		a[0].push_back(x);
		
		if(i==0) a[0][1]=a[0][0];
		else a[i][1]=max(a[i-1][0],a[i][0]);
	}
	
	for(long j=1;j<=k;j++)
	{
		cout << a[5][j] <<" ";	
	}
	
	for(long j=2;j<=k;j++)
	{
		for(long i=j-1;i<n;i++)
		{
			a[i][j]=max(a[i-1][j],j*a[i][0]+a[i-1][j-1]);
		}
	}
	cout << a[n-1][k];
}

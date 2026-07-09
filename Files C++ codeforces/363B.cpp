#include<iostream>

using namespace std;

long long a[200005]={0}, dp[200005]={0};

int main()
{
	int n, k;
	cin >> n >> k;
	
	for(int i=0;i<n;i++)
		cin >> a[i];
		
		
	long long sumk = 0, ans = k-1;
	for(int i=0;i<n;i++)
	{
		sumk+=a[i];
		if(i>=k-1)
		{
			dp[i] = sumk;
			sumk-=a[i-k+1];
		}
	}
	
	for(int i=k-1;i<n;i++)
	{
		if(dp[i] < dp[ans]) ans = i;
	}
	cout << ans - 1;
}



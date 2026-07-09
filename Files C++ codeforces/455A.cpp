#include<iostream>

using namespace std;

long long a[100005]={0}, dp[100005]={0}; 


int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		a[x]++;
	}
		
	dp[0] = 0;
	dp[1] = a[1];
	
	for(int i=2;i<100001;i++)
	{
		dp[i] = max(dp[i-1], dp[i-2] + i*a[i]);
	}
	cout << dp[100000];
}



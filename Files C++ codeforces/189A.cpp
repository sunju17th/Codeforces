#include<iostream>

using namespace std;

int dp[100005]; 

int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	
	dp[0] = 0;
	for(int i=1;i<=n;i++)
	{
		dp[i]=-1e5;
		if(i>=a) dp[i] = max(dp[i-a]+1, dp[i]);
		if(i>=b) dp[i] = max(dp[i-b]+1, dp[i]);
		if(i>=c) dp[i] = max(dp[i-c]+1, dp[i]);
		cout << dp[i] <<" ";
	}
	cout << dp[n] ;

}



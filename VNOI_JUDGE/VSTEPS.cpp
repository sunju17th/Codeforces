#include<iostream>

using namespace std;

long long dp[100005][2]={0};
long long mod=14062008;
void ans(int n)
{
	dp[0][0]=0;
	dp[1][0]=1;
	for(int i=2;i<=n;i++)
	{
		if(dp[i][1]!=0)
			dp[i][0]=0;
		else
			dp[i][0]=(dp[i-1][0]%mod + dp[i-2][0]%mod)%mod;
	}
}

int main()
{
	int n, t;
	cin >> n >> t;
	for(int i=0;i<t;i++)
	{
		int a;
		cin >> a;
		dp[a][1]++;
	}
		
		
	ans(n);
	
	cout << dp[n][0] << endl;
	
}



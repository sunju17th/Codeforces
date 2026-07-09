#include<iostream>

using namespace std;

long a[1001][1001]={0}; 
long dp[1001][1001]={0};

int main()
{
	int n, m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >> a[i][j];
		}
	}
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1 && j==1) dp[i][j] = a[i][j];
			else if(i==1) dp[i][j] = dp[i][j-1] + a[i][j];
			else if(j==1) dp[i][j] = dp[i-1][j] + a[i][j];
			else
			{
				dp[i][j] = min(dp[i][j-1] + a[i][j], dp[i-1][j] + a[i][j]);
			}
		}
	}
	
	
	cout << dp[n][m];
	
}



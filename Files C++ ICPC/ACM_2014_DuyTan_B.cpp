#include<iostream>

using namespace std;

int a[1001][1001], dp[1001][1001]={0};

int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin >> a[i][j];
			
	long c = -1;
	long s = 0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(a[i][j] == 0) dp[i][j] = 0;
			else if(i==0) dp[i][j] = 0;
			else if(j==0) dp[i][j] = 0;
			else dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
			
			if(dp[i][j]>c)
			{
				c=dp[i][j];
				s=1;
			}
			else if(dp[i][j] == c) s++;
		}
	}
	
	cout << s*c ;
	
}



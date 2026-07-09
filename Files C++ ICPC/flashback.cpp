#include<iostream>

using namespace std;

long long s[10000][10000]={0};

int main()
{
	int n, k;
	long long tong=0;
	cin >> n >> k;
	s[0][1]=n;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s[i][1]=(s[i][1]%1000000007+(s[i-1][j]*j)%1000000007)%10000000007;
			s[i][j+1]=s[i-1][j];
		}
	}
	for(int i=1;i<=k+1;i++)
	{
		tong=(tong%1000000007+s[k][i]%1000000007)%1000000007;
	}
	cout << tong;
	return 0;
}

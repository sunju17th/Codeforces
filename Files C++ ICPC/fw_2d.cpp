#include<iostream>

using namespace std;

long long a[2000][2000]={0}, s[2000][2000]={0};

int main()
{
	int m, n, t;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin >> a[i][j];
			s[i][j]=a[i][j]+s[i][j-1]+s[i-1][j]-s[i-1][j-1];
		}
	}
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n >> m;
		cout << s[n][m] << endl;
	}
	return 0;
}

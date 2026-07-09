#include<iostream>

using namespace std;

long a[1001][1001];
long maxa[1001];

int main()
{
	int m, n;
	cin >> n >> m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> a[i][j];
		}
	}
	
	long ans = 0;
	for(int j=0;j<m;j++)
	{
		int maxa = 0;
		for(int i=0;i<n;i++)
		{
			if(maxa < a[i][j]) maxa = a[i][j];
		}
		ans+=maxa;
	}
	
	cout << ans;
}



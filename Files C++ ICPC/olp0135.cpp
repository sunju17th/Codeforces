#include<iostream>

using namespace std;

char a[100005][20];
int g[18]={0};
int h[18]={0};
int result[100005];

int main()
{
	int n, c;
	cin >> n >> c;
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
			if(a[i][j]=='H')
			{
				h[j]++;
			}
			if(a[i][j]=='G')
			{
				g[j]++;
			}
		}
	}
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='H')
			{
				result[i]=result[i]+g[j];
			}
			if(a[i][j]=='G')
			{
				result[i]=result[i]+h[j];
			}
		}
	}
	
	for(int i=0;i<c;i++)
	{
		cout << result[i] << endl;
	}
}

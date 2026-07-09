#include<iostream>

using namespace std;

long a[1001][1001]={0};
long t[1001][1001]={0};

int main()
{
	long x, y, z;
	cin >> x >> y >> z ;
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			cin >> a[i][j];
		}
	}
	
	for(int i=0;i<z;i++)
	{
		long a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		t[a][b]+=e;
		t[a][d+1]-=e;
		t[c+1][b]-=e;
		t[c+1][d+1]+=e;
	}
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			t[i][j]+=t[i-1][j];
		}
	}
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			t[i][j]+=t[i][j-1];
			a[i][j]+=t[i][j];
		}
	}
	
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			cout << a[i][j] <<" ";
		}
		cout << endl;
	}
}



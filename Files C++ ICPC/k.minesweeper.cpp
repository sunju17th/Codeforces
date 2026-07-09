#include<iostream>

using namespace std;

char a[100][100];
int r=1, c=1;

void solve(char a[][100], int m, int n, int r, int c)
{
	int s=0;
	for(int i=m-1;i<=m+1;i++)
	{
		if(i<0||i>=r)
			continue;
		for(int j=n-1;j<=n+1;j++)
		{
			if(j<0||i>=c)
				continue;
			if(a[i][j]=='*')
				s++;
		}
		a[m][n]=s+'0';
	}
}

void nhap(char a[][100],int r, int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin >> a[i][j];
		}
	}
}

int main()
{
	while(r!=0&&c!=0)
	{
		cin >> r >> c;
		if(r==0)
			return 0;
		nhap(a,r,c);
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if(a[i][j]=='.')
					solve(a,i,j,r,c);
			}
		}
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}


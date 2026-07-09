#include<iostream>

using namespace std;

long long D[1000][1000], W[1000][1000];
long long vc=10000000;


void Thietlap(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			D[i][j]=i;
		}
	}
}

void floydw(int n)
{
	Thietlap(n);
	for(int k=0;k<n;k++)
	{
		for(int u=0;u<n;u++)
		{
			for(int v=0;v<n;v++)
			{
				if(W[u][v]>W[u][k]+W[k][v])
				{
					W[u][v]=W[u][k]+W[k][v];
					D[u][v]=D[k][v];
				}
			}
		}
	}
}

int main()
{
	long long n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> W[i][j];
		}
	}
	floydw(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << D[i][j];
		}
		cout << endl;
	}
} 

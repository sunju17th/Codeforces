#include<iostream>
#include<vector>

using namespace std;

vector <long> W[100007];

void thietlap(long long n)
{
	for(long i=0;i<n;i++)
	{
		for(long j=0;j<n;j++)
		{
			W[i].push_back(10007);
		}
	}
}

void floydw(long long n)
{
	for(int k=0;k<n;k++)
	{
		for(int u=0;u<n;u++)
		{
			for(int v=0;v<n;v++)
			{
				if(W[u][v]>W[u][k]+W[k][v])
				{
					W[u][v]=W[u][k]+W[k][v];
				}
			}
		}
	}
}

int main()
{
	long long n ,q;
	cin >> n >> q;
	thietlap(n);
	for(long long i=0;i<n-1;i++)
	{
		long a, b, c;
		cin >> a >> b >> c;
		W[a-1][b-1]=c;
		W[b-1][a-1]=c;
	}
	floydw(n);
	for(long long i=0;i<q;i++)
	{
		long a , b;
		cin >> a >> b;
		cout << W[a-1][b-1] << endl;
	}
} 

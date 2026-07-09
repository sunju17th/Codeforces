#include<iostream>

using namespace std;

long long pt[100007];
long long hash[100007][20];

void test()
{
	
}

int main()
{
	long long n, k;
	cin >> n >> k;
	for(long i=1;i<=n;i++) 
	{
		cin >> pt[i];
		hash[i][0]=pt[i];
	}
	for(long i=1;(1<<i)<=n;i++)
	{
		for(long j=1;j<=n;j++)
		{
			hash[j][i]=hash[j][i-1]+hash[(1<<(i-1))+j][i-1];
		}
	}
	for(long i=0;(1<<i)<=n;i++)
	{
		for(long j=1;j<=n;j++)
		{
			cout << hash[j][i] << " ";
		}
		cout << endl;
	}
} 

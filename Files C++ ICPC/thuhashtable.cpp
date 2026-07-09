#include<iostream> 
#include<math.h>

using namespace std;

long long pt[10007];

long long minpt[10007][10007];

int main()
{
	long n;
	cin >> n;
	for(long i=1;i<=n;i++)
	{
		cin >> pt[i];
		minpt[i][0]=pt[i];
	}
	for(long i=1;(1<<i)<=n;i++)
	{
		for(long j=1;j<=n;j++)
		{
			minpt[j][i]= min(minpt[j][i-1],minpt[(1<<(i-1))+j][i-1]);
		}
	}
	for(long i=0;(1<<i)<=n;i++)
	{
		for(long j=1;j<=n;j++)
		{
			cout << minpt[j][i] << " ";
		}
	}
}

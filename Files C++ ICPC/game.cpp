#include<iostream>
#include<math.h>

using namespace std;

long cost[10001]={0};
int a[10001];

int main()
{
	int n, k, j;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<n;i++)
	{
		cost[i]=999999;
		if(i-k<0) j=0;
		else j=i-k;
		for(j;j<i;j++)
		{
			int costij = abs(a[i]-a[j]);
			cost[i]=min(cost[j]+costij,cost[i]);
		}
	}
	cout << cost[n-1];
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

long long a[100000] ;
long long dem(long long a[],long long x)
{
	int j=sqrt(x);
	long long dem;
	if(x%a[j]==0)
	{
		long long so = a[j];
		if(x%a[j]==a[j])
		{
			return 2*dem(a,so)-1;
		}
		else
			return dem(a,so)+dem(a,(x/so));
	}
}

int main()
{
	int n, t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		cin >> n;
	}
	return 0;
}

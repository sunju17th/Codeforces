#include<iostream>

using namespace std;

long n, m=0;
long long a[1000001], s=0;

void nhap(long long a[],long n, long long &s)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s=s+a[i];
	}
}


int main()
{
	cin >> n;
	nhap(a,n,s);
	for(long i=0;i<n;i++)
	{
		for(long j=i+1;j<n;j++)
		{
			if((s-a[i]-a[j])%2==0)
				m++;
		}
	}
	cout << m;
	return 0;
}

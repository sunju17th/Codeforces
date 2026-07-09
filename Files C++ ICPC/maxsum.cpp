#include<iostream>

using namespace std;

long long a[100000];

long long max1(long n)
{
	if(n==1) return a[n];
	return max(a[n],max1(n-1));
}

long long max2(long n)
{
	if(n==2) return a[1]-2*a[2];
	return max(max1(n-1)-2*a[n],max2(n-1));
}

long long max3(long n)
{
	if(n==3) return a[1]-2*a[2]-a[3];
	return max(max2(n-1)-a[n], max3(n-1));
}

int main()
{
	long n;
	cin >> n;
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout <<max3(n-1);
}

#include<iostream>

using namespace std;

long long a[1000000];

void nhap(long long a[], long n)
{
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

bool kt(long long a[], long n)
{
	for(long i=0;i<(n/2);i++)
	{
		if(a[i]!=a[n-i-1])
			return false;
	}
	return true;
}

int main()
{
	long n, i;
	cin >> n;
	nhap(a,n);
	if(kt(a,n)==true)
		cout << "TRUE";
	else
		cout <<"FALSE";
	return 0;
}

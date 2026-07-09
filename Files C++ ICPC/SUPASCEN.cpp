#include<iostream>

using namespace std;

void nhap(long long a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

bool kt(long long a[],int n)
{
	for(int i=2;i<n;i++)
	{
		if(a[i-2]+a[i-1]>a[i])
			return false;
	}
	return true;
}

int main()
{
	int n;
	long long a[49];
	cin >> n;
	nhap(a,n);
	if(kt(a,n)==true)
		cout << "TRUE";
	else
		cout << "FALSE";
	return 0;
}

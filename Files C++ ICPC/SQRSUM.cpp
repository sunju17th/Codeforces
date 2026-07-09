#include<iostream>

using namespace std;

long long unsigned s=0;
long long a[1000000];
int n;

void nhap(long long a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

int main()
{
	cin >> n;
	nhap(a,n);
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			s=s+a[i]*a[i];
		}
	}
	cout << s;
	return 0;
}

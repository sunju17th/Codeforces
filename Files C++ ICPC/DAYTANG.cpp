#include<iostream>

using namespace std;

long long  a[1000000], n;

void nhap(long long a[], long long n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}



int main()
{
	long long max=0, s=1;
	cin >> n;
	nhap(a,n);
	for(long long i=1;i<n;i++)
	{
		if(a[i]>=a[i-1])
		{
			s++;
			if(s>max)
			{
				max=s;
			}
		}
		else
		{
			s=1;
		}
	}
	cout << max;
	return 0;	
}

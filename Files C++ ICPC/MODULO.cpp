#include<iostream>

using namespace std;

long long a[100000];

int main()
{
	long long max1=0, max2=0, n;
	cin >> n;
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else
		{
			if(a[i]!=max1&&a[i]>max2)
			{
				max2=a[i];
			}
		}
	}
	cout << max2;
} 

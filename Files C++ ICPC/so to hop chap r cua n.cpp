#include<iostream>

using namespace std;

int a[40];

int main()
{
	int n, r,dem=1,m;
	cin >> n >> r;
	for(int i=1;i<=r;i++)
	{
		a[i]=i;
		cout << a[i];
	}
	cout << endl;
	while(a[1]!=n-r+1)
	{
		dem++;
		for(int i=r;i>0;i--)
		{
			if(a[i]<n-r+i)
			{
				m=i;
				break;
			}
		}
		a[m]=a[m]+1;
		for(int i=m+1;i<=r;i++)
		{
			a[i]=a[i-1]+1;
		}
		for(int i=1;i<=r;i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
	cout << dem;
} 


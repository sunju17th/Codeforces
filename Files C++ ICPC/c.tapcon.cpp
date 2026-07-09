#include<iostream>

using namespace std;

long long a[1000];

void nhap(long long a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		nhap(a,n);
		int tong = 0;
		int s=0;
		for(int p=n;p>0;p--)
		{
			for(int k=0;k+p<n;k++)
			{
				for(int m=k;m<=k+p;m++)
				{
					s=s+a[m];
				}
				if(s%k==0)
				{
					tong++;
				}
			}
		}
	}
	return 0;
}

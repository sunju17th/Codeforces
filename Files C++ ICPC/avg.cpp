#include<iostream>

using namespace std;

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
		long long a[2000];
		nhap(a,n);
		int dem=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+2;j<n;j++)
			{
				for(int k=i+1;k<j;k++)
				{
					if(2*a[k]==a[i]+a[j])
					{
						dem++;
					}
				}
			}
		}
		cout << dem << endl;
	}
	return 0;
}


#include<iostream>

using namespace std;

long long a[10000], l[10000]={1};

int main()
{
	int n;
	long lon=0; 
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				l[i]=max(l[j]+1,l[i]);
				if(lon<l[i])
				{
					lon=l[i];
				}
			}
		}
	}
	cout << lon; 
	return 0;
} 

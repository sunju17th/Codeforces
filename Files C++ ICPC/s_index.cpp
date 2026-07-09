#include<iostream>

using namespace std;

long a[10007], b[10007]={0};

int main()
{
	long n, maxn=0;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
		for(int j=i-1;j>0;j++)
		{
			if(a[i]>a[j])
			{
				b[i]=b[j]+1;
				break;
			}
			if(a[i]==a[j])
			{
				b[i]=b[j];
				break;
			}
			if(a[i]<a[j])
			{
				b[j]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(n-b[i]>=a[i]&&maxn<a[i])
		{
			maxn=a[i];
		}
	}
	cout << maxn;
} 

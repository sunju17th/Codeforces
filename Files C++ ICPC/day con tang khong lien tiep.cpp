#include<iostream>

using namespace std;

long long a[1000];
long long d[1000]={0};
long long temp[1000];

int main()
{
	int n, maxd=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cout << d[0] <<" ";
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>=a[j]&&d[i]<d[j]+1)
			{
				d[i]=d[j]+1;
				if(d[i]>maxd) maxd = d[i];
			}
		}
		cout << d[i] <<" ";
	}
	cout << endl;
	for(int i=n-1;i>=0;i--)
	{
		if(d[i]==maxd)
		{
			temp[maxd]=a[i];
			maxd--;
		}
		if(maxd==-1) break;
	}
	for(int i=0;i<n;i++)
	{
		cout << temp[i];
	}
} 

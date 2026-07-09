#include<iostream>
#include<math.h>

using namespace std;

long a[100005], b[100005];

int main()
{
	int n;
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
		cin >> b[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(b[i]>b[j]) swap(b[i],b[j]);
		}
	}
	
	long minres = 1e9+7;
	int j = 0;
	for(int i=0;i<n;i++)
	{
		if(abs(a[i]-b[j])<minres) minres = abs(a[i]-b[j]);
		if(b[j]<a[i] && j<n) j++;
	}
	
	cout << minres;
}



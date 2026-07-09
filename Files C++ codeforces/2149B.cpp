#include<iostream>

using namespace std;

long absl(long x)
{
	if(x<0) x=-x;
	return x;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long max=-1;
		long a[200005];
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]) swap(a[i],a[j]);
			}
		}
		
		for(int i=0;i<n-1;i+=2)
		{
			if(absl(a[i]-a[i+1])>max) max=absl(a[i]-a[i+1]);
		}
		cout << max << endl;
	}
}



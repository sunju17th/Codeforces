#include<iostream>

using namespace std;

long  a[200005];

long long mod = 1e9 + 7;
int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, k;
		long long maxsum=0, sum=0;
		cin >> n >> k;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		
		if(a[0]>0) sum = a[0];
		
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1] && a[i]>0)
			{
				sum+=a[i];
			}
			else
				if(a[i]>0) sum=a[i];
				else sum=0;
			maxsum=max(maxsum,sum);
		}
		
		for(int i=0;i<n;i++)
		{
			sum=((sum%mod)+a[i]%mod)%mod;
		}
		
		for(int i=0;i<k;i++)
		{
			maxsum=((maxsum%mod)+(maxsum%mod))%mod;
		}
		
		maxsum=((maxsum%mod)+(sum%mod))%mod;
		
		cout << maxsum << endl;
	}
}



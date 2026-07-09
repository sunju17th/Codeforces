#include<iostream>

using namespace std;

long long a[200005]={0}, b[200005]={0};

int main()
{
	int n, m;
	cin >> n >> m;
	while(m--)
	{
		long long k, l, r;
		cin >> k >> l >> r;
		
		if(k==0)
		{
			a[l] ++;
			a[r+1] --;
		}
		if(k==1)
		{
			a[l]--;
			a[r+1]++;
		}
		if(k==2)
		{
			long s = r-l+1;
			b[l] ++;
			b[r+1] --;
			a[r+1] -= s;
		}
		
		
		if(k==3)
		{
			long s = r-l+1;
			b[l] --;
			b[r+1] ++;
			a[r+1] += s;
		}
		
		
		
	}
	for(int i=1;i<=n;i++)
	{
		b[i] = b[i-1] + b[i];
		a[i]+=b[i];
	}
	
	
	for(int i=1;i<=n;i++)
	{
		a[i] += a[i-1];
	}
	
	
	for(int i=1;i<=n;i++)
			cout << a[i] <<" ";
	
}



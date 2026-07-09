#include<iostream>
#include<algorithm>

using namespace std;

long a[100005];

long bs(int l, int r, long val)
{
	long result=1e9+7;
	bool kt=false;
	while(l<=r)
	{
		int m=(l+r)/2;
		
		if(a[m]==val) return val;
		
		else
		{
			if(a[m]>val)
			{
				if(a[m]<result) 
				{
					result = a[m];
					kt=true;
				}
				r=m-1;
			}
			else l=m+1;
		}
	}
	
	if(kt==true) return result;
	return -1;
}

int main()
{
	int n, q;
	cin >> n >> q;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	for(int i=0;i<q;i++)
	{
		long l,r,x;
		cin >> l >> r >> x;
		cout << bs(l,r,x) << endl;
	}
}



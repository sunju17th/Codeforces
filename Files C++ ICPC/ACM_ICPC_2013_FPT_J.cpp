#include<bits/stdc++.h>

using namespace std;

vector <long> a;

long absl(long x)
{
	if(x<0) return -x;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{ 
		int n;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			long x;
			cin >> x;
			a.push_back(x);
		}
		
		sort(a.begin(), a.end());
		
		
		long x=0, y=0;
		for(int i=n-1;i>=0;i--)
		{
			if(i%2==0) x+= a[i];
			else y+=a[i];
		}
		
		long ans = absl(x-y);
		cout << ans << endl;
	}
}



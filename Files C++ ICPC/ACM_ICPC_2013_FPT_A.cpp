#include<bits/stdc++.h>

using namespace std;

vector <long> a;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		long long k, ans=0;
		cin >> n >> k;
		
		for(int i=0;i<n;i++)
		{
			long long x;
			cin >> x;
			a.push_back(x);
		}
		
		sort(a.begin(), a.end());
		
		for(int i=0;i<n-2;i++)
		{
			for(int j=i+1;j<n-1;j++)
			{
				long long need = k - (a[i]+a[j]);
				int x = lower_bound(a.begin() + j + 1, a.end(), need) - a.begin();
				ans += n - x;
			}
		}
		ans = ans * 6;
		cout << ans;
	}
}


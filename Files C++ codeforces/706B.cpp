#include<bits/stdc++.h>

using namespace std;

long a[100005]={0};

int main()
{
	long ans;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin  >> a[i];
	
	sort(a,a+n);
	
	int t;
	cin >> t;
	while(t--)
	{
		long limit ;
		cin >> limit;
		ans = upper_bound(a ,a+n, limit) - a;
		cout << ans <<endl;
	}
}



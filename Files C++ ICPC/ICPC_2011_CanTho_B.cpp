#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n;
		long long temp=1;
		int ans = 0;
		cin >> n;
		for(long i=1;i*i<=n;i++)
		{
			if(n%i==0) 
			{
				ans++;
				if(i*2<n && (n/i)*2<n) ans++;
			}	
		}
		if(ans>=3) cout << "YES" <<endl;
		else cout <<"NO"<<endl;
		
	}
}     







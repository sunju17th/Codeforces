#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		int ans;
		for(long long i=2;i<=1e9+1;i++)
		{
			long long temp = n;
			int so = temp%i;
			bool kt = true;
			while(temp>0)
			{
				if(temp%i != so)
				{
					kt = false;
					break;
				}
				else 
					temp/=i;
			}
			if(kt == true)
			{
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	
	}
}



#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long n, ans=0;
		cin >> n;
		long temp = n;
		while(temp>0)
		{
			int x = temp%10;
			if(x!=0 && n%x==0) ans++;
			temp/=10;
		}
		cout << ans << endl;
	}
}



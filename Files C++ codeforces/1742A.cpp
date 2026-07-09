#include<iostream>

using namespace std;

int main()
{
	long t;
	cin >> t;
	while(t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		if(a+b==c ||b+c==a||a+c==b) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
		 
}



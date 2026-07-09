#include<iostream>

using namespace std;

int main()
{
	int q;
	cin >> q;
	for(int t=0;t<q;t++)
	{
		long long n, s=0;
		cin >> n;
		s=n;
		while(n>0)
		{
			s=s+n/2;
			n=n/2;
		}
		cout << s << endl;
	}
}

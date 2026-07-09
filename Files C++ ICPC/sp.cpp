#include<iostream>

using namespace std;

int main()
{
	long m, n, q, s=0;
	cin >> m >> n >> q;
	if(n/(m+1)<1)
	{
		cout << q*n;
	}
	if(n/(m+1)>=1)
	{
		cout << q*(n-n/(m+1));
	}
}

#include<iostream>

using namespace std;
int main()
{
	long long int n, k, q, r;
	cin >> n >> k;
	for (r=0;r<=n;r++)
	{
		if(n==q*k+r)
		{
			q=(n-r)/k;
			cout << q+r;
		}
	}
return 0;

}

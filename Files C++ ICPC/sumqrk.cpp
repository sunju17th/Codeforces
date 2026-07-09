#include<iostream>

using namespace std;
int main()
{
	long unsigned int n, k, q, r;
	cin >> n >> k;
	q=0;
	while (q<r)
	{
		q=q+1;
		r=0;
		while (r<n)
		{
			r=r+1;
			if(n==q*k+r)
				cout << q+r;
		}
	}
	return 0;
}

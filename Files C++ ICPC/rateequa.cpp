#include<iostream>
#include<vector>

using namespace std;

vector <long long> fib;
long long s=1;

int main()
{
	long long n, a;
	cin >> a >> n;
	fib.push_back(0);
	fib.push_back(1);
	for(int i=2;i<=n;i++)
	{
		fib.push_back((fib[i-1]%1000000007+fib[i-2]%1000000007)%1000000007);
		s=(s%1000000007+fib[i])%1000000007;
	}
	s=((s%1000000007)*a)%1000000007;
	cout << s;
	return 0;
}

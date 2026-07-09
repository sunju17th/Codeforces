#include<iostream>

using namespace std;

long long nhanNhiPhan(long long a, long long b, long long m) //nhan An Do
{
	if(b==0) return 0;
	if(b%2==0) return 2 * nhanNhiPhan(a, b/2, m) % m;
	else return  (nhanNhiPhan(a,b/2,m) * 2 + a) % m;
}

int main()
{
	long long a, b, m;
	cin >> a >> b >> m;
	cout << nhanNhiPhan(a, b, m);
}



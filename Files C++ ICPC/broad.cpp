#include<iostream>

using namespace std;

long long mod = 1e9 + 7;

long s[10000007];

int main()
{

	long long n, a, b;
	cin >> n >> a >> b;
	
	s[1]=a;
	s[2]=(((a%mod)*(a%mod))%mod + b)%mod;
	
	for(int i=3;i<=n/5;i++)
	{
		s[i]=((s[i-1]%mod)*(a%mod))%mod+((s[i-2]%mod)*(b%mod))%mod;
	}
	
	cout << s[n/5];
}

/*
f1 = a;
f2 = f1*a + b;
f3 = f2*a + f1*b;
f4 = f3*a + f2*b;*/


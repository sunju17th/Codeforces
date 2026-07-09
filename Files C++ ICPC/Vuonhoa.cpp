#include <iostream>

using namespace std;

char x[1003][1003];

long long eulerTotient(long long n) {
    long long result = n;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0) {
                n /= p;
            }
            result -= result / p;
        }
    }
    if (n > 1) {
        result -= result / n;
    }
    return result;
}

long long modularExponentiation(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}
long long powerModPrime(long long base, long long exponent, long long prime) {
    int phiPrime = eulerTotient(prime);
    
    long long reducedExponent = exponent % phiPrime;
    
    return modularExponentiation(base, reducedExponent, prime);
}

int main() {
    int n;long long maxn = 0, minn = 1e9+10;
    cin >> n;
    long long p = 1e9+7;
	for(int i=1;i<=n;i++)
	{
		int a=0;
		long long s=0;
		for(int j=1;j<=n;j++)
		{
			cin >> x[i][j];
			if(x[i][j]=='#')
			{
				a++;
			}
			else
			{
				s=(s%p+powerModPrime(a,a,p))%p;
				a=0;
			}
		}
		if(maxn<s) maxn=s;
		if(minn>s) minn=s;
	}
	
	cout << maxn <<" "<<minn;
	
    return 0;
}


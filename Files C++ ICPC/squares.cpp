#include<iostream>
#include<math.h> 

using namespace std;

long long mod = 1e9+7;

long long powmod(long long n) 
{	
  	if (n == 0) return 1;
  	
  	long long result = powmod(n/2);
  	result = (result * result) % mod;
  	
  	if (n % 2 == 1) result = (result * 4) % mod;
  	
  	return result;
}


int main()
{
	long n, a;
	long long tong=0;
	cin >> n >> a;
	
	long long x=powmod(n+1)%mod;
	
	tong = ((a%mod)*((x-1)%mod)/3)%mod;
	
	cout << tong;
	return 0;
}

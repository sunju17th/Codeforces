#include <iostream>
#include <math.h>
using namespace std;

int prime[10000001]; // N = 10^7

void sang(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
    
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}


int main()
{
	sang();
	long n, k, s=0;
	cin >> n >> k;
	for(long i=1;i<=n;i++)
	{
		if(prime[i]&&prime[i+k]&&i+k<=n)
		{
			s++;
		}
			
	}
	cout << s;
}

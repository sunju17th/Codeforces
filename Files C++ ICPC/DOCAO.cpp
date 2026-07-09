#include <iostream>
#include <math.h>
using namespace std;

int prime[10000001]; 

void sang()
{
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

int tongchuso(long n)
{
	int s=0;
	while(n>0)
	{
		s+=n%10;
		n/=10;	
	}
	return s;
}

int main()
{
	sang();
	long n, h, s=0;
	cin >> n >> h;
	for(int i=0;i<=n;i++)
	{
		if(prime[i])
		{
			if(tongchuso(i)==h)
			{
				cout << i <<endl;
				s++;
			}
		}
	}
	cout << s;
}



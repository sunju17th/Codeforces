#include<iostream> 
#include<math.h>

using namespace std;
long long mod = 1e9+7; 

int main()
{
	double a, b;
	cin >> a >> b;
	long x, y;
	x=(long) a;
	y=(long) b;
	if(x>0) x--;
	
	if(x!=y)
	{
		long long sumb = (y%mod)*((y+1)%mod)*((2*y+1)%mod)%mod;
		sumb = sumb/6;
		
		long long suma = (x%mod)*((x+1)%mod)*((2*x+1)%mod)%mod;
		suma = suma/6;
		
		cout << sumb-suma;
	}
	else
	{
		long sum = ((x%mod)*(x%mod))%mod;
		cout << sum;
	}
	
} 

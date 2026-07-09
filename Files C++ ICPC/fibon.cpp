#include<iostream>

using namespace std;

long long mod=1e9+7;

class matrix
{
	long long a, b, c, d;
	public :
		
		matrix bang(long long x, long long y, long long z, long long t) {
			a=x;
			b=y;
			c=z;
			d=t;
		}
		
		matrix nhan(matrix x, matrix y)
		{
			long long resulta=((x.a%mod)*(y.a%mod))%mod;
			long long resultb=((x.b%mod)*(y.b%mod))%mod;
			long long resultc=((x.c%mod)*(y.c%mod))%mod;
			long long resultd=((x.d%mod)*(y.d%mod))%mod;
			
			matrix result;
			
			result.bang(resulta,resultb,resultc,resultd);
			
			return result;
		}
		matrix luythua(long long n, matrix x)
		{
			if(n==1) return x;
			else
				if(n%2==0)
				{
					matrix temp = x.luythua(n/2,x);
					return nhan(temp,temp);
				}
				else
					return nhan(x,x.luythua(n-1,x));
		}
};

long long result(long long n)
	{
		if (n==1||n==2)
       		return 1;
       	
       	matrix x;
       	x.bang(1,1,1,0);
       	
       	x=x.luythua(n,x);
       	
       	return x.a;
	}

int main()
{
	long long n;
	cin >> n;
	
	cout << x.result(n);
}

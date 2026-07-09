#include<iostream> 
#include<math.h>

using namespace std;

long long tong[10000007]={0};

long long tonguoc(long n)
{
	long long s=0;
	for(long i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
			if(n/i!=i&&n/i!=n)
			{
				s=s+n/i;
			}
		}
	}
	return s;
}

int main()
{
	for(long i=2;i<=1000;i++)
	{
		tong[i]=tonguoc(i);
		cout << abs(tong[i]-i) << " ";
	}
	int q;
	cin >> q;
	for(int t=0;t<q;t++)
	{
		long a, b;
		long long s=0;
		cin >> a >> b;
		for(a;a<=b;a++)
		{
			s=s+abs(a-tong[a]);
		}
		cout << s;
	}
}

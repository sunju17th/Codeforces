#include<iostream>

using namespace std;

long dem(long long a, long long l, long long r)
{
	long min=l/a;
	if(l%a!=0)
	{
		min++;
	}
	long max=r/a;
	return max-min;
}

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		long long a, b, l, r;
		long s,trung=0;
		cin >> l >> r >> a >> b;
		long min=l/a;
		if(l%a!=0)
		{
			min++;
		}
		long max=r/a;
		for(min;a*min<=max;min++ )
		{
			if(a*min%b==0)
			{
				trung++;
			}
		}
		s=dem(a,l,r)+dem(b,l,r)-trung;
		cout << dem << endl;
	}
	return 0;
}

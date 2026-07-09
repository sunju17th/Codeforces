#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int q=0;q<n;q++)
	{
		long long m[200005];
		long long a, b , c, d;
		cin >> a >> b >> c >> d;
		m[0]=0;
		for(long i=1;i<=a;i++)
		{
			cin >> m[i];
		}
		for(long i=1;i<=a;i++)
		{
			if(abs(m[i]-m[i-1])*c<d)
			{
				b=b-abs(m[i]-m[i-1])*c;
			}
			else
			{
				b=b-d;
			}
			if(b<=0)
				break; 
		}
		if(b<=0)
		{
			cout <<"NO"<<endl;
		}
		else
		{
			cout <<"YES"<<endl;
		}
	}
}

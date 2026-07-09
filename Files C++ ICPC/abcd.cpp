#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	unsigned long long a,b,c,d,s=0;
	cin >> a >> b >> c >> d;
	while(a!=0||b!=0||c!=0||d!=0)
	{
		long long temp=a;
		a=a-b; 
		if(a<0)
		{
			a=-a;
		}
		b=b-c;
		if(b<0)
		{
			b=-b;
		}
		c=c-d;
		if(c<0)
		{
			c=-c;
		}
		d=d-temp;
		if(d<0)
		{
			d=-d;
		}
		s++;
	}
	cout << s;
	return 0;
}

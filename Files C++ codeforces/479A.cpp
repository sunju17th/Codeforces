#include<iostream>

using namespace std;

int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long s=0;
	
	if(a==1 || b==1 || c==1)
	{
		if(a==1) s=(a+b)*c;
		if(b==1)
		{
			if(a>c) s=a*(b+c);
			else s=(a+b)*c;
		}
		if(c==1) s=a*(b+c);
		
		if( (a==1&&b==1) || (a==1&&c==1) ||  (b==1&&c==1)){
			s=a+b+c;
		}
	}
	else s=a*b*c;
	
	
	
	cout << s;
}



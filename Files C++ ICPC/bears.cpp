#include<iostream>

using namespace std;

int main()
{
	long long a, b,s=0;
	cin >> a >> b;
	while(a<=b)
	{
		a=3*a;
		b=b*2;
		s++;
	}
	cout << s;
	return 0;
}

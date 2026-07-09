#include<iostream>

using namespace std;

int main()
{
	long long a, b, c, d, max, min;
	cin >> a >> b >> c >> d;
	min=a;
	max=a;
	if(b>=max)
	max=b;
	else min = b;
	if(c>=max)
	max=c;
	else min = c;
	if(d>=max)
	max=d;
	else min = d;
	cout << max <<" "<< min;
	return 0;
	
}

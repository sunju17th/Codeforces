#include<iostream>

using namespace std;

int main()
{
	long long s=0,a,b,c;
	cin >> a >> b >> c;
	if(a*b*c>s) s=a*b*c;
	if(a*b+c>s) s=a*b+c;
	if(a+b*c>s) s=a+b*c;
	if(a*c+b>s) s=a*c+b;
	if(a+b+c>s) s=a+b+c;
	cout << s;
}

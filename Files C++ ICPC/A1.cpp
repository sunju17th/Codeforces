#include<iostream>

using namespace std;

int main()
{
	long a, b, c, maxs=-1;
	cin >> a >> b >> c;
	if(a+b+c>maxs) maxs=a+b+c;
	if(a*b+c>maxs) maxs=a*b+c;
	if(a+b*c>maxs) maxs=a+b*c;
	if(a*b*c>maxs) maxs=a*b*c;
	if(a*c+b>maxs) maxs=a*c+b;
	cout << maxs;
}



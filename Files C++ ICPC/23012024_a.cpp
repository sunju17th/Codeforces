#include<iostream>

using namespace std;

int main()
{
	long long a, b, c, d, x, y;
	cin >> a >> b >> c >> d;
	x=(a+b+c+d)/60;
	y=(a+b+c+d)%60;
	cout << x <<endl ;
	cout << y; 
}

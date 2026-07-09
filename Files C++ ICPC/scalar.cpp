#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	float a1, a2, b1, b2, a, b;
	cin >> a1>> a2>> b1>> b2;
	a = (a1+b1)/2;
	b = (a2+b2)/2;
	cout << fixed << setprecision(2) << a << endl;
	cout << fixed << setprecision(2) << b;
	return 0;
}


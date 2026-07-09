#include<iostream>
#include<math.h>
#include<iomanip>
#define pi 3.1416

using namespace std;

int main()
{
	float a, b, alpha, s;
	cin >> a>>b>>alpha;
	s=a*b*sin(alpha*pi/180)/2;
	cout << fixed << setprecision(2) << s;
	return 0;
}

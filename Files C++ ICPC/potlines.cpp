#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	float a, b, c, x, y, d;
	cin >> a >> b >> c >> x >> y;
	d = (fabs(a*x+b*y+c))/(sqrt(a*a+b*b));
	cout << fixed << setprecision(2) << d;
	return 0;
}

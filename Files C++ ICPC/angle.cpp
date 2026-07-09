#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;


float cos(float a1, float b1, float a2, float b2)
{
	float s = fabs(a1*b1 + a2*b2);
	float d = sqrt((a1*a1+a2*a2)*(b1*b1+b2*b2));
	float k = s/d;
	return k;
}

int main ()
{
	float a1, b1, c1, a2, c2, b2, s;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 ;
	s = cos(a1,b1,a2,b2);
	cout << fixed << setprecision(2) << s;
	return 0;
}


#include<math.h>
#include<iomanip>
using names#include<iostream>
pace std;

float cos(float a1, float a2, float b1, float b2)
{
	float s = a1*b1 + a2*b2;
	float d = sqrt((a1*a1+a2*a2)*(b1*b1+b2*b2));
	float k = s/d;
	return k;
}
int main()
{
	float a1, a2, b1, b2, s;
	cin >> a1 >> a2 >> b1 >> b2 ;
	s = cos(a1, a2, b1, b2);
	cout << fixed << setprecision(2) << s;
}

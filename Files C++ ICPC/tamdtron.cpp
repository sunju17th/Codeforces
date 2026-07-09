#include<iostream>

#include<iomanip>
using namespace std;

float x(float x1, float x2, float x3)
{
	float s = (x1+x2+x3)/3;
	return s;
}

float y(float y1, float y2, float y3)
{
	float k = (y1+y2+y3)/3;
	return k;
}

int main ()
{
	float x1, x2, x3, y1, y2, y3, xx, yy;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
	xx=x(x1,x2,x3);
	yy=y(y1,y2,y3);
	cout << fixed << setprecision(2) << xx <<" "<<yy;

	return 0;
}

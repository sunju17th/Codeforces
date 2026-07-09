#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

float kc(float x1, float x2 , float y1, float y2)
{
	float d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return d;
}

int main()
{
	float x1, x2, y1, y2, d;
	cin >> x1 >> x2 >> y1 >> y2;
	d=kc(x1,x2,y1,y2);
	cout << fixed << setprecision(4) << d;
}

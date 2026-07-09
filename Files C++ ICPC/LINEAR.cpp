#include<iostream>

using namespace std;

int main()
{
	float a, b, c, x1, x2, y1, y2, d, dx, dy;
	cin >> x1 >> y1 >> x2 >> y2;
	d = x1-x2;
	dx=y1-y2;
	dy=x1*y2-x2*y1;
	a=dx/d;
	b=1;
	c=dy/d;
	cout << a <<" "<<b<<" "<<c;
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
		long long x,y,x0=0,y0=0,s=0,dx,dy;
		cin >> x >> y;
		cin >> x0 >> y0;
		dx=x-x0;
		if(dx<0)
		{
			dx=0-dx;
		}
		dy=y-y0;
		if(dy<0)
		{
			dy=0-dy;
		}
		if(dx<=dy)
		{
			cout << dy ;
		}
		else
		{
			cout << dx ;
		}
	return 0;
} 

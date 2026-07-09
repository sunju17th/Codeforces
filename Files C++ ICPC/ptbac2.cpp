#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x1, x2, a, b, c, d;
	cin >> a >> b >> c;
	if (a==0)
		cout <<"phuong trinh bi loi ";
	else 
	{
		d = b*b-4*a*c;
		if(d<0)
			cout << "phuong trinh vo nghiem"; 
		if(d==0)
		{
			x1=-b/2*a;
			cout << "phuong trinh co nghiem la " << x1;
		}
		if(d>0)
		{
			x1 = (-b-sqrt(d))/(2*a);
			x2 = (-b+sqrt(d))/(2*a);
			cout << "phuong trinh co hai nghiem la x1 = "<< x1 << " va x2 = " << x2 ;
		}
	}
	return 0;
	
}

#include<iostream>
#include<math.h>

using namespace std;


int main()
{
	float x1,x2,x3,y1,y2,y3,d1,d2;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ;
	d1=(y2-y1)/(x2-x1);
	d2=(y3-y2)/(x3-x2);
	if(d1==d2)
		cout <<"TRUE";
	else
	 	cout <<"FALSE";
	return 0;
}

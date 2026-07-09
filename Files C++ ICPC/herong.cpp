#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	  double a, b, c, p, s;
	cin >> a >> b >> c;
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		cout << fixed << setprecision(2) << s;
	return 0;
}



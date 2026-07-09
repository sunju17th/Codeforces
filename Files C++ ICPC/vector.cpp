#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	float a1, a2, s;
	cin >> a1 >> a2;
	s=sqrt(a1*a1+a2*a2);
	cout << fixed << setprecision(2) << s;
	return 0;
	
}

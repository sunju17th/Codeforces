#include<iostream>
#include<iomanip>
#define pi 3.1416

using namespace std;

int main()
{	
	float r, s;
	cin >> r;
	

		s = 2*pi*r;
		cout << fixed << setprecision(2) << s;

	return 0;
}

#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	float x, n, s;
	cin >> x >> n;
	s=pow(x,(1/n));
	cout << fixed << setprecision(2);
	cout << s;
	return 0;
}

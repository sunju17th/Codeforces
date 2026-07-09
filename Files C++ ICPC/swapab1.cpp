#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	long long   a, b, temp;
	cin >> a >>b;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;

	return 0;
}

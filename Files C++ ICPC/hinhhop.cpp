#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	unsigned long long int a, b, c, p, ax, bx, cx, s;
	cin >> a >> b >> c;
	p = sqrt(a*b*c);
	ax = p/a;
	bx = p/b;
	cx = p/c;
	s = 4*(ax+bx+cx);
	cout << s;
	return 0;
	
}


#include<iostream>

using namespace std;
long long a, b, c, d;


int main()
{
	long long res = 0;
	cin >> a >> b >> c >> d;
	if(b<c-d)  res = a/b;
	else
	{
		res = (a-d)/(c-d);
		a-=(c-d)*res;
		res+=a/b;
	}
	
	cout << res;
}



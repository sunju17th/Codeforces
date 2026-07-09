#include<iostream>

using namespace std;

int main()
{
	char c;
	cin >> c;
	if (islower(c))
	{
	c = c-32;
	cout << c;
	}
	return 0;
}

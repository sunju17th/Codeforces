#include<iostream>

using namespace std;

int main()
{
	char c;
	int n;
	cin >> c >> n;
	if (n <= 10)
		if (isupper(c))
		{
			if(int(c)+n>90)
			{
				c = 64 - 90 + c + n ;
				cout << c;
			}
			else 
			{
				c = c + n;
				cout << c;
			}
	}
	return 0;
}

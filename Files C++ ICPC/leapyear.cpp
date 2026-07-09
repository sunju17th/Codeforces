#include<iostream>

using namespace std;

int main()
{
	long a, b, s=0;
	cin >> a >> b;
	for(a;a<=b;a++)
	{
		if(a%19==3||a%19==6||a%19==9||a%19==11||a%19==14||a%19==17||a%19==0)
		{
			s++;
		}
	}
	cout << s;
}


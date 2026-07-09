#include<iostream>

using namespace std;


int main()
{
	int a, b, s=0, i, j;
	long c;
	cin >> a >> b >> c;
	for(i=0;i<=(c/a);i++)
	{
		for(j=0;j<=(c/b);j++)
		{
			if(a*i+b*j<=c&&a*i+b*j>s)
				s=a*i+b*j;
		}
	}
	cout << s;
	return 0;
}

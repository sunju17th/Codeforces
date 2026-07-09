#include<iostream>

using namespace std;

int main()
{
	long long n, s=0;
	cin >> n;
	if(n%2==1)
	{
		s=-n/2-1;
	}
	else
	{
		s=n/2;
	}
	cout << s;
	return 0;
}

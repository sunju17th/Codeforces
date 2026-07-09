#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	int k=n%10;
	n=n/10;
	if(k<=5)
	{
		n=n*10;
	}
	else
	{
		n=(n+1)*10;
	}
	cout << n;
	return 0;
}

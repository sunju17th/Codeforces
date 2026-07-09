#include<iostream>

using namespace std;

int main()
{
	long long n;
	int i, k=0;
	cin >> n;
	while(n!=0)
	{
		n=n/10;
		k++;
	}
	cout << k;
	return 0;
}

#include<iostream>

using namespace std;

int main()
{
	long int n, k, s;
	cin >> n;
	k=n/4096;
	if(n%4096!=0)
	k++;
	k=k*4;
	cout << k;
	return 0;
}

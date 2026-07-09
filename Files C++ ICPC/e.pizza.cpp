#include<iostream>

using namespace std;

int main()
{
	unsigned long long n, s; 
	cin >> n;
	s=((n%987654321)*((n-3)%987654321)/2)%987654321;
	s=s*(s-1)/2+1;
	s=s%987654321; 
	cout << s;
	return 0;
} 

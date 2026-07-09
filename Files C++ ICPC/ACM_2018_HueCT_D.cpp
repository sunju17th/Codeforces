#include<iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
	string a, b;
	cin >> a >> b;
	int g = gcd(a.length(), b.length());
	for(int i=0;i<g;i++)
		cout << "1";
}



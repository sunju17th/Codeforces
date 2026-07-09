#include<iostream>

using namespace std;

long gcd(long a, long b) {
    while (b != 0) {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


long lcm(long a, long b) {
    return (a * b) / gcd(a, b);
}

int main()
{
	int q;
	cin >> q;
	for(int t=0;t<q;t++)
	{
		long long l, r, a, b, i, s=0, bcnn;
		cin >> l >> r >> a >> b;
		bcnn=lcm(a,b);
		if(l%a==0) s++;
		if(l%b==0) s++;
		if(l%bcnn==0) s--;
		s=s+r/a-l/a;
		s=s+r/b-l/b;
		s=s-r/bcnn+l/bcnn;
		cout << s << endl; 
	}
}

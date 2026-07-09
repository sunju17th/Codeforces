#include <bits/stdc++.h>
using namespace std;

long long gcd_ll(long long a, long long b) {
    return b == 0 ? a : gcd_ll(b, a % b);
}

long long doubleArea(long long x1, long long y1,
                     long long x2, long long y2,
                     long long x3, long long y3) {
    return abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		long long x1, y1, x2, y2, x3, y3;
	    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	    long long S2 = doubleArea(x1, y1, x2, y2, x3, y3);
	
	    long long B = gcd_ll(abs(x2 - x1), abs(y2 - y1))
	                + gcd_ll(abs(x3 - x2), abs(y3 - y2))
	                + gcd_ll(abs(x1 - x3), abs(y1 - y3));
	
	    long long I = (S2 - B + 2) / 2;
	
	    cout << I << "\n";
	 } 
    return 0;
}

#include<iostream>

using namespace std;

long long ucln(long long a, long long b)
{
	while(b) 
	{
		a%=b;
		swap(a, b);
	}
	return a;
}

long long a[1000006];

int main()
{
	int t;
	cin >> t;
	while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (n == 1) {
            cout << 2 << '\n';
            continue;
        }

        long long ans = 0;
        long long appended = 0; 

        int i = 0;
        for (; i + 1 < n; i += 2) {
            long long  x = a[i], y = a[i+1];
            if (ucln(x, y) == 1 || x % y == 0 || y % x == 0) {
                ans += 1;
            } else {
                ans += 2;
                appended += 1;
            }
        }

        if (i < n) appended += 1;

        if (appended > 0) {
            if (appended % 2 == 0) ans += appended / 2;
            else ans += (appended + 3) / 2;
        }

        cout << ans << '\n';
    }
}



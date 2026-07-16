#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    long long ans = a*c*e + a*c*f + a*d*e + a*d*f + b*c*e + b*c*f + b*d*e + b*d*f;
    cout << ans;
}
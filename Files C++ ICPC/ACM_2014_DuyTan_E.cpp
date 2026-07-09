#include <bits/stdc++.h>
#define ll long long
using namespace std;


vector<char> sieve(int N) {
    vector<char> isPrime(N+1, true);
    if (N >= 0) isPrime[0] = false;
    if (N >= 1) isPrime[1] = false;
    for (int p = 2; 1LL*p*p <= N; ++p)
        if (isPrime[p])
            for (long long q = 1LL*p*p; q <= N; q += p)
                isPrime[(int)q] = false;
    return isPrime;
}

inline long long C3(long long x) {
    if (x < 3) return 0;
    return x * (x-1) * (x-2) / 6;
}
inline long long C2(long long x) {
    if (x < 2) return 0;
    return x * (x-1) / 2;
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int maxS = 2*n;
    auto isPrime = sieve(maxS);
    // prefix count of primes
    vector<int> pref(maxS+1, 0);
    for (int i = 1; i <= maxS; ++i) pref[i] = pref[i-1] + (isPrime[i] ? 1 : 0);

    ll E = n / 2;
    ll O = n - E;
    ll ans = C3(E) + C3(O); // all same-parity triples

    int maxEven = (n % 2 == 0) ? n : n-1;
    int maxOdd  = (n % 2 == 1) ? n : n-1;

    // (1 odd, 2 even) : for each odd i count evens j such that i+j composite
    for (int i = 1; i <= n; i += 2) {
        int left = i + 2;
        int right = i + maxEven;
        if (left > right) continue;
        int primesIn = pref[min(right, maxS)] - pref[min(left-1, maxS)];
        ll cnt = E - primesIn; // number of even j such that i+j composite
        ans += C2(cnt);
    }

    // (1 even, 2 odd)
    for (int i = 2; i <= n; i += 2) {
        int left = i + 1;
        int right = i + maxOdd;
        if (left > right) continue;
        int primesIn = pref[min(right, maxS)] - pref[min(left-1, maxS)];
        ll cnt = O - primesIn; // number of odd j such that i+j composite
        ans += C2(cnt);
    }

    cout << ans << "\n";
    return 0;
}


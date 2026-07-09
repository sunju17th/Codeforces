#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
 
int64 modPow(int64 a, int64 b, int64 mod) {
    int64 r = 1;
    while (b) {
        if (b & 1) r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

int64 modInv(int64 a, int64 mod) {
    return modPow(a, mod - 2, mod);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long N, K, M, P;
    cin >> N >> K >> M >> P;

    vector<int64> fact(K + 5), invfact(K + 5);
    fact[0] = 1;
    for (int i = 1; i <= K; i++) fact[i] = fact[i - 1] * i % P;
    invfact[K] = modInv(fact[K], P);
    for (int i = K; i >= 1; i--) invfact[i - 1] = invfact[i] * i % P;

    auto C = [&](long long n, long long r) -> int64 {
        if (r < 0 || r > n) return 0;
        if (n < P) { // n nh?
            int64 num = 1;
            for (long long i = 0; i < r; ++i)
                num = num * ((n - i) % P) % P;
            return num * invfact[r] % P;
        }
        // Khi N l?n, ta ch? c?n công th?c này v? K nh?
        int64 res = 1;
        for (long long i = 0; i < r; ++i) {
            res = res * ((n - i) % P) % P;
            res = res * modInv(i + 1, P) % P;
        }
        return res;
    };

    int64 ans = 0;
    for (long long i = 0; i <= K - 1; ++i) {
        int64 sign = (i % 2 == 0 ? 1 : P - 1);
        int64 term = C(K - 1, i) * C(N - i * M, K) % P;
        ans = (ans + sign * term) % P;
    }

    cout << ans % P << "\n";
}


#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2) res = res * base % MOD;
        base = base * base % MOD;
        exp /= 2;
    }
    return res;
}

long long modl(long long n) {
    return power(n, MOD - 2);
}

map<long long, int> snt(long long n) {
    map<long long, int> m;
    for (long long i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            int dem = 0;
            while (n % i == 0) {
                n /= i;
                dem++;
            }
            m[i] = dem;
        }
    }
    if (n > 1) m[n] = 1;
    return m;
}
long long tinh(long long p, int a, int k) {
    vector<vector<long long>> dp(2, vector<long long>(a+1));
    for (int b = 0; b <= a; b++) dp[0][b] = power(p, b);
    for (int i = 1; i <= k; i++) {
        int curr = i % 2;
        int prev = (i - 1) % 2;
        dp[curr][0] = 1;
        for (int b = 1; b <= a; b++) {
            long long nghichdao = modl(b + 1);
            long long temp1 = dp[prev][b];
            long long temp2 = b * dp[curr][b-1] % MOD;
            dp[curr][b] = nghichdao * (temp1 + temp2) % MOD;
        }
    }
    return dp[k % 2][a];
}
void giai() {
    long long n;
    int k;
    cin >> n >> k;
    map<long long, int> m = snt(n);
    long long kq = 1;
    for (auto const& [p, a] : m) {
        long long tich = tinh(p, a, k);
        kq = kq * tich % MOD;
    }
    cout << kq << endl;
}

int main() {
    giai();
    return 0;
}

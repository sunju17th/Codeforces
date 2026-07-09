#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// --------------------------
// Hàm tính C(n, k) theo t? h?p
// --------------------------
int C[25][25];

void buildComb() {
    for (int n = 0; n <= 20; ++n) {
        C[n][0] = C[n][n] = 1;
        for (int k = 1; k < n; ++k)
            C[n][k] = (C[n-1][k-1] + C[n-1][k]) % MOD;
    }
}

// --------------------------
// Hàm c?ng mod
// --------------------------
inline void addmod(long long &a, long long b) {
    a = (a + b) % MOD;
}

// --------------------------
// Chýõng tr?nh chính
// --------------------------
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    buildComb(); // ti?n x? l? C(n, k)

    int n, k;
    cin >> n >> k;
    vector<int> a(n+2);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    // Thêm ph?n t? ?o a[n+1] ð? ð?m b?o m?i ðo?n ð?u ðóng
    a[n+1] = 1000000000; // r?t l?n ð? m?i ði?u ki?n ð?u tho?

    // f[i][open][total]
    static long long f[25][25][25];
    memset(f, 0, sizeof(f));

    // Cõ s?
    f[0][0][0] = 1;

    // --------------------------
    // Duy?t t?ng ph?n t?
    // --------------------------
    for (int i = 0; i <= n; ++i) {
        for (int open = 0; open <= k; ++open) {
            for (int total = 0; total <= k; ++total) {
                long long cur = f[i][open][total];
                if (!cur) continue;

                // Duy?t s? lý?ng ðo?n m? thêm
                for (int add = 0; add <= k - total; ++add) {
                    // Duy?t s? lý?ng ðo?n ðóng
                    for (int del = 0; del <= open; ++del) {
                        int newOpen = open + add - del;
                        if (newOpen < 0 || newOpen > k) continue;

                        // Ði?u ki?n ràng bu?c tãng
                        int diff = a[i] - a[i+1];
                        if (newOpen - open <= diff) continue;

                        // H? s? t? h?p: cách ch?n add ðo?n và del ðo?n
                        long long ways = 1LL * C[k - total][add] * C[open][del] % MOD;

                        addmod(f[i+1][newOpen][total + add], cur * ways % MOD);
                    }
                }
            }
        }
    }

    cout << f[n+1][0][k] % MOD << "\n";
    return 0;
}


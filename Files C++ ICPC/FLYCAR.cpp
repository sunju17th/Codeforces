#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    // Ð?c d? li?u ð?u vào
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }

    // DP table: dp[i][j] là t?ng ð? l?ng phí nh? nh?t khi vý?t qua i chý?ng ng?i v?t và s? d?ng j l?n thay ð?i ð? cao
    vector<vector<long long> > dp(n + 1, vector<long long>(k + 1, LLONG_MAX));

    // Kh?i t?o: ? ði?m b?t ð?u, không có l?ng phí
    for (int j = 0; j <= k; ++j) {
        dp[0][j] = 0;
    }

    // Tính toán DP
    for (int i = 1; i <= n; ++i) {  // Xét t?ng chý?ng ng?i v?t
        for (int j = 0; j <= k; ++j) {  // Xét t?ng s? l?n thay ð?i ð? cao
            long long max_height = 0;
            for (int p = i; p >= 1; --p) {  // Xét chi?u cao cho ðo?n t? p ð?n i
                max_height = max(max_height, (long long)h[p - 1]);
                if (j > 0) {
                    dp[i][j] = min(dp[i][j], dp[p - 1][j - 1] + max_height * (i - p + 1) - accumulate(h.begin() + p - 1, h.begin() + i, 0LL));
                }
            }
        }
    }

    // K?t qu?: t?m giá tr? nh? nh?t trong dp[n][j] v?i 0 <= j <= k
    long long result = LLONG_MAX;
    for (int j = 0; j <= k; ++j) {
        result = min(result, dp[n][j]);
    }

    // Xu?t k?t qu?
    cout << result << endl;

    return 0;
}


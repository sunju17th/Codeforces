#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> values(n + 1, 0);

    // Ð?c giá tr? c?a các món quà
    for (int i = 1; i <= n; ++i) {
        cin >> values[i];
    }

    // Tính d?y s? prefix sum
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix_sum[i] = prefix_sum[i - 1] + values[i];
    }

    // T?o m?ng dp ð? lýu giá tr? t?i ða có th? ð?t ðý?c cho m?i v? trí i
    vector<long long> dp(n + 1, 0);

    // B?t ð?u tính dp
    for (int i = 1; i <= n; ++i) {
        dp[i] = max(dp[i - 1], dp[max(0, i - k)] + prefix_sum[i] - prefix_sum[max(0, i - k)]);
    }

    // In ra k?t qu?
    cout << dp[n] % MOD << endl;

    return 0;
}


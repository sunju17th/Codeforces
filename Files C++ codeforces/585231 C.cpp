#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> leds = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (i >= leds[j] && dp[i - leds[j]] != -1) {
                dp[i] = max(dp[i], dp[i - leds[j]] + j);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}

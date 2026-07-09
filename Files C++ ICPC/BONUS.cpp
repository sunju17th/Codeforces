#include <iostream>
#include <cmath>
int a[100000];
int dp[2][100000][21];
unsigned long long solve(int k, int f, int t) {
	if (f > t) return 0;
	int h = log2(t - f + 1);
	int p;
	if (k) {
		p = (a[dp[k][f][h]] > a[dp[k][t - (1 << h) + 1][h]]) ? dp[k][f][h] : dp[k][t - (1 << h) + 1][h];
	} else {
		p = (a[dp[k][f][h]] < a[dp[k][t - (1 << h) + 1][h]]) ? dp[k][f][h] : dp[k][t - (1 << h) + 1][h];
	}
	unsigned long long res = 1ull * (p - f + 1) * (t - p + 1) * a[p];
	res += solve(k, f, p - 1) + solve(k, p + 1, t);
	return res;
}
int main() {
	std::ios::sync_with_stdio(0); std::cin.tie(0);
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; ++i) {
		std::cin >> a[i];
	dp[0][i][0] = i;
	dp[1][i][0] = i;
	}
	for (int j = 1; (1 << j) <= n; ++j)
		for (int i = 1; i + (1 << j) - 1 <= n; ++i)
			for (int k = 0; k < 2; ++k)
				dp[k][i][j] = (a[dp[k][i][j - 1]] > a[dp[k][i + (1 << (j - 1))][j - 1]]) == k ? dp[k][i][j - 1] : dp[k][i + (1 << (j - 1))][j - 1];
	std::cout << solve(1, 1, n) - solve(0, 1, n);
}

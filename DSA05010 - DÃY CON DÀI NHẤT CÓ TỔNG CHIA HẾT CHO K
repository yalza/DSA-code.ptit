#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int dp[1001][1001];
		dp[0][0] = 0;
		for (int i = 1; i <= n; i++)dp[0][i] = -1e9;
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			x %= k;
			for(int j=0;j<k;j++)
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j + k - x) % k]+1);
		}
		cout << dp[n][0] << endl;
	}
}

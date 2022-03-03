#include<iostream>
using namespace std;
int dp[1001][1001];
#define mod 1000000007
int main() {
	for (int i = 0; i <= 1000; i++) {
		for (int j = 0; j <= 1000; j++) {
			if (i == j || j == 0)dp[i][j] = 1;
			else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			dp[i][j] %= mod;
		}
	}
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << dp[n][k] << endl;
	}
}

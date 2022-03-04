#include<iostream>
using namespace std;

int main() {
	int n, k; cin >> k >> n;
	int M[1000];
	for (int i = 0; i < n; i++)cin >> M[i];
	int dp[101][25001]={0};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j < M[i])dp[i][j] = dp[i - 1][j];
			else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - M[i]] + M[i]);
		}
	}
	cout << dp[n][k];
}

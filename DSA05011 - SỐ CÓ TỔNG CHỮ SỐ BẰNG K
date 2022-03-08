#include<iostream>
#include<string.h>
using namespace std;
#define mod 1000000007
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		long long dp[n+1][k+1];
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= 9; i++)dp[1][i] = 1;
		 
		for (int i = 1; i <= n; i++)
			for (int l = 0; l <= 9; l++)
				for (int j = l; j <= k; j++)
					dp[i][j] = (dp[i][j] % mod + dp[i - 1][j - l] % mod) % mod;

		cout << dp[n][k] << endl;
	}
}

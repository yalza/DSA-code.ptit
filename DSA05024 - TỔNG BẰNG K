#include<iostream>
using namespace std;
#define mod 1000000007
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int M[1000];
		long long dp[1001] = { 0 };
		dp[0] = 1;
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 1; i <= m; i++) {
			for (int j = 0; j < n; j++) {
				if (i >= M[j])
					dp[i] += dp[i - M[j]] % mod;
				dp[i] %= mod;
			}
		}
		cout << dp[m] << endl;
	}
}

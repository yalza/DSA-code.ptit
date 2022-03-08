#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int dp[1000000];
		for (int i = 1; i <= n; i++) {
			dp[i] = i;
			for (int j = 1; j <= sqrt(i); j++)
				dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
		cout << dp[n] << endl;
	}
}

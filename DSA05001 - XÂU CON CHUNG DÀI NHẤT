#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		int dp[1000][1000]={0};
		int res = 0;
		for (int i = 1; i <= a.length(); i++) {
			for (int j = 1; j <= b.length(); j++) {
				if (a[i-1] == b[j-1])dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
				res = max(res, dp[i][j]);
			}
		}
		cout << res << endl;
	}
}

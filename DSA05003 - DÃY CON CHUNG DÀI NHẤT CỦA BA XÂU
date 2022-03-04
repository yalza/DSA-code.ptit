#include<iostream>
#include<string.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int A, B, C; cin >> A >> B >> C;
		string a, b, c; cin >> a >> b >> c;
		int dp[101][101][101];
		memset(dp, 0, sizeof(dp));
		for (int i = 1; i <= A; i++) {
			for (int j = 1; j <= B; j++) {
				for (int k = 1; k <= C; k++) {
					if (a[i - 1] == b[j - 1] && b[j - 1] == c[k - 1])
						dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					else
						dp[i][j][k] = max(dp[i - 1][j][k], max(dp[i][j - 1][k], dp[i][j][k - 1]));
				}
			}
		}
		cout << dp[A][B][C] << endl;
	}
}

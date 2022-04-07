#include<iostream>
using namespace std;


int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int M[500][500], dp[501][501] = { 0 };
		int res = 0;
		for (int i = 0; i < n; i++)for (int j = 0; j < m; j++)cin >> M[i][j], dp[i][j] = M[i][j], res = max(res, M[i][j]);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
			    if(M[i][j]==0)dp[i][j]=0;
			    else
				dp[i][j] += min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
				res = max(res, dp[i][j]);
			}
		}
		cout << res << endl;
	}
}

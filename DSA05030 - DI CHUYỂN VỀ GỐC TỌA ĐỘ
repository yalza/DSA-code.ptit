#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int m, n;

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> m >> n;
		long long dp[101][101];
		for (int i = 0; i <= m; i++)for (int j = 0; j <= n; j++)dp[i][j] = 1;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++)
				dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
		}
		cout << (dp[m][n]+1)/2 << endl; 
	}
}

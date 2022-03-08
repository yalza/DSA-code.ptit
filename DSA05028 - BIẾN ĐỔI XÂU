#include<iostream>
using namespace std;
#define mod 1000000007
int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		int dp[100][100];
		for (int i = 0; i <= a.length(); i++) {
			for (int j = 0; j <= b.length(); j++)
			{
				if (i == 0 || j == 0)dp[i][j] = i + j;
				else if (a[i - 1] == b[j - 1])dp[i][j] = dp[i - 1][j - 1];
				else dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]))+1;
			}
		}
		cout << dp[a.length()][b.length()] << endl;
	}
}

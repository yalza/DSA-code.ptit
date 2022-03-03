#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<int, int>> M(n);
		vector<int> dp(n, 1);
		for (int i = 0; i < n; i++)cin >> M[i].first;
		for (int i = 0; i < n; i++)cin >> M[i].second;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (M[i].second > M[j].second)swap(M[i], M[j]);
			}
		}
		int res = 1;
		for (int i = 0; i < n; i++) {
			int maxx = 0;
			for (int j = 0; j < i; j++) {
				if (M[i].first >= M[j].second)maxx = max(maxx, dp[j]);
			}
			dp[i] += maxx;
			res = max(res, dp[i]);
		}
		cout << res << endl;
	}
}

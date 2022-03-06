#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		pair<int, int> M[101];
		int n; cin >> n;
		for (int i = 0; i < n; i++)cin >> M[i].first >> M[i].second;
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (M[i].first > M[j].first)swap(M[i], M[j]);
		int dp[101];
		int res = 0;
		for (int i = 0; i < n; i++) {
			dp[i] = 1;
			int m = 0;
			for (int j = 0; j < i; j++) {
				if (M[i].first > M[j].second)m = max(dp[j], m);
			}
			dp[i] += m;
			res = max(dp[i], res);
		}
		cout << res << endl;
	}
}

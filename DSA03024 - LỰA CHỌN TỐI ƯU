#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(pair<int, int> A, pair<int, int> B) {
	return A.second < B.second;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<int, int>> M(n);
		int dp[100000];
		for (int i = 0; i < n; i++) {
			cin >> M[i].first >> M[i].second; dp[i] = 1;
		}
		sort(M.begin(), M.end(), cmp);
		int res = 1, j = 0;
		for (int i = 1; i < n; i++) {
			if (M[i].first >= M[j].second) {
				j = i;
				res++;
			}
		}
		cout << res << endl;
	}
}

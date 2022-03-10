#include<iostream>
#include<algorithm>
#include<vector>
#include<stdbool.h>
using namespace std;
bool cmp(pair<int, int> A, pair<int, int> B) {
	return A.second < B.second;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<pair<int, int>> M(n);
		for (int i = 0; i < n; i++)cin >> M[i].first >> M[i].second;
		sort(M.begin(), M.end(), cmp);
		vector<int> N(n, 1);
		int res = 1;
		int x = 0;
		for (int i = 1; i < n; i++) {
			if (M[i].first >= M[x].second) {
				res++;
				x = i;
			}
		}
		cout << res << endl;
	}
}

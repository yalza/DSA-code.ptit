#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int n; cin >> n;
	int M[10000], dp[10000];
	for (int i = 0; i < n; i++) {
		cin >> M[i];
		dp[i] = 1;
	};
	int res = 1;
	for (int i = 0; i < n; i++) {
		int maxx = 0;
		for (int j = 0; j < i; j++) {
			if (M[j] < M[i])maxx = max(maxx, dp[j]);
		}
		dp[i] += maxx;
		res = max(res, dp[i]);
	}
	cout << res << endl;
}

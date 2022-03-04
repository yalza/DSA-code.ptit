#include<iostream>
using namespace std;
string test(int* M, int n, int s) {
	int dp[100000] = { 0 };
	dp[0] = 1;
	for (int i = 0; i < n; i++)dp[M[i]] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = s; j >= M[i]; j--)
			if (dp[j - M[i]] == 1)dp[j] = 1;
	}
	if (dp[s] == 1)return "YES";
	return "NO";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, s; cin >> n >> s;
		int M[1000];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
		}
		cout << test(M, n, s) << endl;
	}
}

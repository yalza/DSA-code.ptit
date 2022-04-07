#include<iostream>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long M[10000], dp[10000];
		int n, k; cin >> n >> k;
		M[0] = M[1] = 1;
		for (int i = 2; i <= n; i++) {
			M[i] = 0;
			for (int j = 1; j <= min(i, k); j++) {
				M[i] += M[i - j];
				M[i] %= 1000000007;
			}
		}
		cout << M[n] << endl;
	}
}

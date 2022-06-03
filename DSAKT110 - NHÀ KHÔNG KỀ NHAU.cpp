#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000000];
		for (int i = 0; i < n; i++)cin >> M[i];
		ll res = 0;
		ll dp[1000000];
		dp[0] = M[0]; dp[1] = max(M[1],M[0]);
		for (int i = 2; i < n; i++) {
			dp[i] = max(dp[i - 1], M[i] + dp[i - 2]);
			res = max(res, dp[i]);
		}
		cout << res << endl;
	}
}

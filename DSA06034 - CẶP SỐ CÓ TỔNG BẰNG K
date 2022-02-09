#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		ll M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		ll res = 0;
		for (int i = 0; i < n-1; i++)
			res += (upper_bound(M + i+1, M + n, k - M[i]) - M) - (lower_bound(M + i+1, M + n, k - M[i]) - M);
		cout << res << endl;
	}
}

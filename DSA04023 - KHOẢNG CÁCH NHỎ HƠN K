#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[1000000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		ll res = 0;
		for (int i = 0; i < n; i++)
			res += lower_bound(M + i, M + n, M[i] + k) - M - i - 1;
		cout << res << endl;
	}
}

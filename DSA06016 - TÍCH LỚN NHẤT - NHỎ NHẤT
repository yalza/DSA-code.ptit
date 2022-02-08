#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<climits>
typedef long long ll;
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		ll x;
		set<ll> S,X;
		while (m--) {
			cin >> x; S.insert(x);
		}
		while (n--) {
			cin >> x; X.insert(x);
		}
		ll res = *S.rbegin() * (*X.begin());
		cout << res << endl;
	}
}

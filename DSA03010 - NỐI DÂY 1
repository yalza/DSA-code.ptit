#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int m; cin >> m;
		multiset<ll> M;
		for (int i = 0; i < m; i++) {
			int n; cin >> n;
			M.insert(n);
		}
		long long sum = 0;
		while (M.size() != 1) {
			ll x = *M.begin();
			M.erase(M.find(*M.begin()));
			ll y = *M.begin();
			M.erase(M.find(*M.begin()));
			sum += (x + y);
			M.insert(x + y);
		}
		cout << sum << endl;
	}
}

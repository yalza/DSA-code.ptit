#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define mod 1000000007
using namespace std;
typedef unsigned long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int m; cin >> m;
		multiset<ll> M;
		for (int i = 0; i < m; i++) {
			int n; cin >> n;
			M.insert(n);
		}
		ll sum = 0;
		while (M.size() != 1) {
			ll x = *M.begin();
			M.erase(M.find(*M.begin()));
			ll y = *M.begin();
			M.erase(M.find(*M.begin()));
			sum += (x % mod + y % mod) % mod;
			sum %= mod;
			M.insert((x % mod + y % mod) % mod);
		}
		cout << sum % mod << endl;
	}
}

#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
typedef long long ll;
ll M[4] = { 1000,2000,3000,5000 };
ll n;
int c;
vector<ll> X, Y;
void reset() {
	X.clear();
	Y.clear();
}
void init() {
	int x = 0;
	while (x <= c) {
		for (int i = 0; i < 4; i++) {
			ll a = M[i] * pow(10, x);
			X.push_back(a);
		}
		x++;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n; cin >> c;
		reset();
		if (n % 1000 != 0)cout << 0 << endl;
		else {
			init();
			reverse(X.begin(), X.end());
			vector<pair<ll, ll>> M;
			ll cnt1 = 0;
			for (auto x : X) {
				M.push_back({ x,n / x });
				cnt1 += n / x;
				n %= x;
			}
			ll cnt2 = 1;
			ll y = 1;
			for (int i = c; i >= 0; i--) {
				vector<pair<ll, ll>> N;
				for (auto x : M) {
					if (to_string(x.first).length() - 4 == i) {
						N.push_back(x);
					}
				}

				ll a = pow(10, i);
				ll b = INT_MAX, c = INT_MAX;
				ll m = 5000 * a, n = 3000 * a, p = 1000 * a, q = 2000 * a;
				for (auto x : N) {
					if (x.first == m || x.first == p)b = min(b, x.second);
				}
				for (auto x : N) {
					if (x.first == n || x.first == p)c = min(c, x.second);
				}
				if (b + c >= 1)
				cnt2 *= (b + c+1);
			}
			cout << cnt1 << " " << cnt2 << endl;
		}
	}
}

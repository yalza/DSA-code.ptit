#include <iostream>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
ll dao(ll n) {
	ll x = 0;
	while (n) {
		x = x * 10 + n % 10;
		n /= 10;
	}
	return x;
}
ll pow(ll n, ll k) {
	if (k == 0)return 1;
	ll tmp = pow(n, k / 2);
	if (k % 2 == 0)return (tmp * tmp) % mod;
	else return ((tmp * tmp) % mod * n)%mod;
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll a; cin >> a;
		cout << pow(a, dao(a)) << endl;
	}
}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
vector<ll> X;
ll dem(ll k, ll n, ll pos) {
    if (k % 2 == 1)return 1;
    if (k < X[pos])return dem(k, n / 2, pos - 1);
    else if (k == X[pos]) {
        return n % 2;
    }
    else if (k > X[pos])return dem(2 * X[pos] - k, n / 2, pos - 1);
}
int main() {
    int t; cin >> t;
    while (t--) {
        ll n, l, r; cin >> n >> l >> r;
        X.clear();
        ll x = 1;
        ll y = n;
        while (n / 2 > 0) {
            x *= 2;
            X.push_back(x);
            n /= 2;
        }
        ll res = 0;
        for (ll i = l; i <= r; i++) {
            res += dem(i, y, X.size() - 1);
        }
        cout << res << endl;
    }
}

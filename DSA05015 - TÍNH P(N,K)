#include<iostream>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll Pkn(int n, int k) {
	if (n < k)return 0;
	ll res = 1;
	for (int i = 0; i < k; i++) {
		res = res * (n - i);
		res %= mod;
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		cout << Pkn(n, k) << endl;
	}
}

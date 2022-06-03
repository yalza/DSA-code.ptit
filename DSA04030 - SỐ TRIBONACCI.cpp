#include<iostream>
using namespace std;
typedef long long ll;
ll MOD = 1000000000000007;
ll M[5] = { 1,3,6,12,23 };
struct matran {
	ll f[4][4] = {
		{1,0,0,0},
		{0,1,1,0},
		{1,1,0,1},
		{0,1,0,0}};
};
ll Mul(ll a, ll b) {
	if (b <= 1)return a%MOD * b;
	ll tmp = Mul(a, b / 2);
	if (b % 2 == 0)return tmp % MOD + tmp % MOD;
	else return tmp % MOD + tmp % MOD + a % MOD;
}
matran operator*(matran A, matran B) {
	matran C;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			C.f[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				C.f[i][j] = C.f[i][j] % MOD + Mul(A.f[i][k],B.f[k][j]) % MOD;
				C.f[i][j] %= MOD;
			}
		}
	}
	return C;
}
matran Pow(matran X, ll k) {
	if (k == 1)return X;
	matran tmp = Pow(X, k / 2);
	if (k % 2 == 0)return tmp * tmp;
	else return tmp * tmp * X;
}
ll Tribonaci(ll n) {
	if (n <= 5)return M[n - 1];
	matran X;
	matran S = Pow(X, n+2);
	return S.f[2][0] - 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		cout << Tribonaci(n) << endl;
	}
}

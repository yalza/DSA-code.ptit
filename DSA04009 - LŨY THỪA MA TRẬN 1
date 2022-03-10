#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
#define mod 10e9+7
#define ll long long
int m, n;
struct matran {
	long long f[10][10];
};
matran operator*(matran A, matran B) {
	matran C;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C.f[i][j] = 0;
			for (int k = 0; k < n; k++) {
				C.f[i][j] += A.f[i][k] % 1000000007 * B.f[k][j] % 1000000007;
				C.f[i][j] %= 1000000007;
			}
		}
	}
	return C;
}
matran powMod(matran A, int k) {
	if (k == 1)return A;
	matran X = powMod(A, k / 2);
	if (k % 2 == 0)return X * X;
	return X * X * A;
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		matran A;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)cin >> A.f[i][j];
		}
		matran B = powMod(A, m);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << B.f[i][j] << " ";
			cout << endl;
		}
	}
}

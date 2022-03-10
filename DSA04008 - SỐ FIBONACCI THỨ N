#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
#define mod 10e9+7
#define ll long long
struct matran {
	long long f[2][2];
};
matran operator*(matran A, matran B) {
	matran C;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			C.f[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				C.f[i][j] += A.f[i][k] % 1000000007 * B.f[k][j] % 1000000007;
				C.f[i][j] %= 1000000007;
			}
		}
	}
	return C;
}
matran powMod(matran A, int n) {
	if (n == 1)return A;
	matran X = powMod(A, n / 2);
	if (n % 2 == 0)return X * X;
	return X * X * A;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		matran A;
		A.f[0][0] = A.f[0][1] = A.f[1][0]=1;
		A.f[1][1] = 0;
		matran res = powMod(A, n);
		cout << res.f[1][0] << endl;
	}
}

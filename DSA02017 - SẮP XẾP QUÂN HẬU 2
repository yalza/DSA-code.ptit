#include<iostream>
using namespace std;
int n;
int M[100], N[100], P[100],X[100][100];
int res = 0;
void Try(int i,int sum) {
	if (i == n + 1) {
		res = max(res, sum);
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (M[j] == 0 && N[j + i] == 0 && P[i - j + n] == 0) {
			M[j] = N[j + i] = P[i - j + n] = 1;
			Try(i + 1,sum+X[j][i]);
			M[j] = N[j + i] = P[i - j + n] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		n = 8;
		res = 0;
		for (int i = 1; i <= n; i++)for (int j = 1; j <= n; j++)cin >> X[i][j];
		Try(1,0);
		cout << res << endl;
	}
}

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[501][501], N[501][501];
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++) {
				cin >> M[i][j];
				N[i][j] = M[i][j];
			}
		for (int i = 2; i <= m; i++)
			for (int j = 1; j <= n; j++)
				if(M[i][j])
				M[i][j] += M[i - 1][j];
		for (int i = 1; i <= m; i++)
			for (int j = 2; j <= n; j++)
				if(N[i][j])
				N[i][j] += N[i][j - 1];
		int res = 0;
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if(M[i][j]!=0)
				for (int l = 0; l <= min(n - j, m - i);l++) {
					if (M[i + l][j] > l && N[i][j + l] > l && M[i + l][j + l] > l && N[i + l][j + l] > l)res = max(res, l + 1);
					else break;
				}
			}
		}
		cout << res << endl;
	}
}

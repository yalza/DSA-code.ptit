#include<iostream>
#include<string.h>
#include<stack>
#include<vector>
#include<queue>
#include<set>
using namespace std;
typedef long long ll;
bool ktra(int M[500][500], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (M[i][j] == 1)return false;
	return true;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[500][500];
		bool check[500][500];
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		int cnt = 0;
		while (1) {
			bool ok = false;
			memset(check, false, sizeof(check));
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					if (!check[i][j]) {
						if (M[i][j] == 2) {
							if (i > 0 && M[i - 1][j] == 1) {
								M[i - 1][j] = 2; check[i - 1][j] = true; ok = true;
							}
							if (i < m - 1&&M[i+1][j]==1) {
								M[i + 1][j] = 2; check[i + 1][j] = true; ok = true;
							}
							if (j > 0 && M[i][j - 1] == 1) {
								M[i][j - 1] = 2; check[i][j - 1] = true; ok = true;
							}
							if (j < n - 1 && M[i][j + 1] == 1) {
								M[i][j + 1] = 2; check[i][j + 1] = true; ok = true;
							}
						}
					}
				}
			}
			if (!ok)break;
			cnt++;
		}
		if (!ktra(M, m, n))cout << -1 << endl;
		else
		cout << cnt << endl;
	}
	
}

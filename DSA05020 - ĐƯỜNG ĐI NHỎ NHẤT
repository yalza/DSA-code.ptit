#include<iostream>
#include <cstring>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[1001][1001];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)cin >> M[i][j];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 && j > 0)M[i][j] += M[i][j - 1];
				if (i > 0 && j == 0)M[i][j] += M[i - 1][j];
				if (i > 0 && j > 0)M[i][j] += min(M[i][j - 1], min(M[i - 1][j],M[i - 1][j - 1]));
			}
		}
		cout << M[m - 1][n - 1] << endl;
	}
}

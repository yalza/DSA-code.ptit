#include<iostream>
#include<cstring>
using namespace std;
char M[501][501];
int m, n;
pair<int, int> u, v;
int dx[4] = { -1,0,0,1 };
int dy[4] = { 0,-1,1,0 };
char dh[4] = { 'B','T','D','N' };
bool check[501][501];
bool ok;
void nhap() {
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			cin >> M[i][j];
			if (M[i][j] == 'S')u = { i,j };
			if (M[i][j] == 'T')v = { i,j };
		}
	ok = false;
	memset(check, false, sizeof(check));
}
void DFS(int x, int y, int count, char DH) {
	check[x][y] = true;
	if (x == v.first && y == v.second && count <= 3) {
		ok = true;
		return;
	}
	if (count > 3 || M[x][y] == 'T') {
		check[x][y] = false;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int x1 = x + dx[i], y1 = y + dy[i];
		if (x1 >= 0 && x1 < m && y1 >= 0 && y1 < m && M[x1][y1] != '*' && !check[x1][y1]) {
			if (dh[i] != DH)
				DFS(x1, y1, count + 1, dh[i]);
			else DFS(x1, y1, count, dh[i]);
		}
	}
	check[x][y] = false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		nhap();
		DFS(u.first, u.second, 0, 'X');
		if (ok)cout << "YES\n";
		else cout << "NO\n";
	}
}

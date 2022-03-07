#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int M[500][500];
int m, n;
bool check[500][500];
int X[8] = { -1,0,1,0,-1,1,1,-1 };
int Y[8] = { 0,1,0,-1,1,1,-1,-1 };
void DFS(int a,int b) {
	check[a][b] = true;
	for (int i = 0; i < 8; i++) {
		int x = a + X[i];
		int y = b + Y[i];
		if (x >= 0 && x < m && y >= 0 && y < n && !check[x][y] && M[x][y] == 1)DFS(x, y);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		memset(check, false, sizeof(check));
		cin >> m >> n;
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		int count = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (M[i][j] == 1 && !check[i][j]) {
					count++;
					DFS(i, j);
				}
			}
		}
		cout << count << endl;
	}
}

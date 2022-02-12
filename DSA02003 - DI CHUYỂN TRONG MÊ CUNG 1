#include<iostream>
#include<stdbool.h>
using namespace std;
bool f;
void Try(int M[][100], string s, int n, int x, int y) {
	if (M[0][0] == 0 || M[n - 1][n - 1] == 0)return;
	if (x == n - 1 && y == n - 1) {
		f = true;
		cout << s << " "; return;
	}
	if (M[x + 1][y] == 1 && x < n) {
		Try(M, s + "D", n, x + 1, y);
	}
	if (M[x][y + 1] == 1 && y < n) {
		Try(M, (s + "R"), n, x, y + 1);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		f = false;
		int n; cin >> n;
		int M[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		string s = "";
		Try(M, s, n, 0, 0);
		if (f == false)cout << -1;
		cout << endl;
	}
}

#include<iostream>
#include<stdbool.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
bool f;
bool ok[100][100];
vector<string> res(100);
void test(int M[][100], string s, int n, int x, int y) {
	if (M[0][0] == 0 || M[n - 1][n - 1] == 0)return;
	if (x == n - 1 && y == n - 1) {
		f = true;
		res.push_back(s);
	}
	if (M[x + 1][y] == 1 && x < n - 1 && !ok[x + 1][y]) {
		ok[x][y] = true;
		test(M, s + "D", n, x + 1, y);
		ok[x][y] = false;
	}
	if (M[x][y + 1] == 1 && y < n - 1 && !ok[x][y + 1]) {
		ok[x][y] = true;
		test(M, (s + "R"), n, x, y + 1);
		ok[x][y] = false;
	}
	if (M[x][y - 1] == 1 && y > 0 && !ok[x][y - 1]) {
		ok[x][y] = true;
		test(M, s + "L", n, x, y - 1);
		ok[x][y] = false;
	}
	if (M[x - 1][y] == 1 && x > 0 && !ok[x - 1][y]) {
		ok[x][y] = true;
		test(M, s + "U", n, x - 1, y);
		ok[x][y] = false;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		f = false;
		int n; cin >> n;
		int M[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				cin >> M[i][j]; ok[i][j] = false;
			}

		string s = "";
		res.clear();
		test(M, s, n, 0, 0);
		if (f == false)cout << -1;
		else {
			sort(res.begin(), res.end());
			for (int i = 0; i < res.size(); i++)
				cout << res[i] << " ";
		}
		cout << endl;
	}
}

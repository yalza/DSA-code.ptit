#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
int M[1001][1001];
int m, n;
struct toado {
	int x, y, cnt;
};
int main() {
	int t; cin >> t;
	while (t--) {
		bool check[1001][1001];
		memset(check, true, sizeof(check));
		check[1][1] = false;
		cin >> m >> n;
		int res = 100000;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)cin >> M[i][j];
		queue<toado> X;
		X.push({ 1,1,0 });
		while (X.size()) {
			toado a = X.front();
			X.pop();
			if (a.x == m && a.y == n) {
				res = min(res, a.cnt);
				break;
			}
			if (a.x > m || a.y > n || a.cnt > res)continue;
			if (check[a.x + M[a.x][a.y]][a.y]) {
				X.push({ a.x + M[a.x][a.y],a.y,a.cnt + 1 });
				check[a.x + M[a.x][a.y]][a.y] = false;
			}
			if (check[a.x][a.y + M[a.x][a.y]]) {
				X.push({ a.x,a.y + M[a.x][a.y],a.cnt + 1 });
				check[a.x][a.y + M[a.x][a.y]] = false;
			}
		}
		if (res == 100000)cout << -1 << endl;
		else
		cout << res << endl;
	}
}

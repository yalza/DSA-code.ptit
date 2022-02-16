#include<iostream>
#include<climits>
#include<string.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
bool check[1001],ok[100][100];
vector<int> A[1001];
int n, m,p;
int res = 1;
void DFS(int u, int cnt) {
	res = max(res, cnt);
	for (int x : A[u]) {
		if (!ok[u][x]) {
			ok[u][x] = ok[x][u] = true;
			DFS(x, cnt + 1);
			ok[u][x] = ok[x][u] = false;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		res = 1;
		for (int i = 0; i < 1001; i++)A[i].clear();
		int n, m; cin >> n >> m;
		p = n;
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		for (int i = 0; i < p; i++) {
			memset(ok, false, sizeof(ok));
			DFS(i, 0);
		}
		cout << res << endl;
	}
}

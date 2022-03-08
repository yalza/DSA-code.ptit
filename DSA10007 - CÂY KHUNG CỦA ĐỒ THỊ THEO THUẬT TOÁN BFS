#include<iostream>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;
vector<int> A[1001];
bool check[1001];
vector<pair<int, int>> X;
void reset() {
	for (int i = 0; i < 1001; i++)A[i].clear();
	memset(check, false, sizeof(check));
	X.clear();
}
void BFS(int u) {
	check[u] = true;
	queue<int> B;
	B.push(u);
	while (B.size()) {
		int a = B.front();
		B.pop();
		for (int x : A[a]) {
			if (!check[x]) {
				X.push_back({ a, x });
				B.push(x);
				check[x] = true;
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		reset();
		int n, m, k;
		cin >> n >> m >> k;
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		BFS(k);
		if (X.size() == n - 1) {
			for (int i = 0; i < X.size(); i++) {
				cout << X[i].first << " " << X[i].second << endl;
			}

		}
		else cout << -1 << endl;
	}
}

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
vector<int> A[1001];
bool check[1001];
vector<pair<int, int>> X;
void reset() {
	for (int i = 0; i < 1001; i++)A[i].clear();
	memset(check, false, sizeof(check));
	X.clear();
}
void DFS(int u) {
	check[u] = true;
	for (int x : A[u]) {
		if (!check[x]) {
			X.push_back({ u,x });
			DFS(x);
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
		DFS(k);
		if (X.size() == n - 1) {
			for (int i = 0; i < X.size(); i++) {
				cout << X[i].first << " " << X[i].second << endl;
			}

		}
		else cout << -1 << endl;
	}
}

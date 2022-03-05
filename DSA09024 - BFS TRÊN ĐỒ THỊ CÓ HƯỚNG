#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
bool check[1001];
vector<int> A[1001];
void BFS(int u) {
	queue<int> X;
	X.push(u);
	check[u] = true;
	while (X.size()) {
		int x = X.front();
		X.pop();
		cout << x << " ";
		for (int v : A[x]) {
			if (!check[v]) {
				X.push(v);
				check[v] = true;
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		memset(check, false, sizeof(check));
		for (int i = 0; i < 1001; i++)A[i].clear();
		int n, m, u; cin >> n >> m >> u;
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
		}
		BFS(u);
		cout << endl;
	}
}

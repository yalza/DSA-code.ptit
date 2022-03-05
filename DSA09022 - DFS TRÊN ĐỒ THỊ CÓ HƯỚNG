#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int n, m, u;
bool check[1001];
vector<int> A[1001];
void DFS(int u) {
	cout << u << " ";
	check[u] = true;
	for (int v : A[u]) {
		if (!check[v])
			DFS(v);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m >> u;
		memset(check, false, sizeof(check));
		for (int i = 0; i < 1001; i++)A[i].clear();
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			
		}
		DFS(u);
		cout << endl;

	}
}

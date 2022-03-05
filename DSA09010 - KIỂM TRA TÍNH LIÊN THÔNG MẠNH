#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int> A[1001];
bool check[1001];
void Reset() {
	for (int i = 0; i < 1001; i++)
		A[i].clear();
	memset(check, false, sizeof(check));
}
void DFS(int u) {
	check[u] = true;
	for (int x : A[u])
		if (!check[x])
			DFS(x);
}
bool Ktra_lt(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		memset(check, false, sizeof(check));
		DFS(i);
		int dem = 0;
		for (int i = 1; i <= n; i++)
			if (check[i])
				dem++;
		if (dem == n)
			count++;
	}
	if (count == n)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		Reset();
		int n, m; cin >> n >> m;
		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
		}
		if (Ktra_lt(n))cout << "YES\n";
		else cout << "NO\n";
	}
}

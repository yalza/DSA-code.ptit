#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
vector<int> A[100001];
bool check[100001];
int res = 0;
int dem = 0;
void DFS(int u) {
	dem++;
	check[u] = true;
	for (auto v : A[u])
		if (!check[v])DFS(v);
}
int main() {
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++)A[i].clear();
		res = 0;
		dem = 0;
		memset(check, false, sizeof(check));
		int m, n; cin >> m >> n;
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		int x = 0;
		for (int i = 1; i <= m; i++) {
			if (!check[i]) {
				DFS(i);
				res = max(res, dem-x);
				x = dem;
			}
		}
		cout << res << endl;
	}
}

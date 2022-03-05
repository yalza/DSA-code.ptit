#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
vector<int> A[1001];
bool check[1001];
void reset() {
	for (int i = 0; i < 1001; i++)A[i].clear();
	memset(check, false, sizeof(check));
}
void DFS(int u) {
	check[u] = true;
	for (auto x : A[u]) {
		if (!check[x])DFS(x);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		reset();
		int m, n; cin >> m >> n;
		while (n--) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		int cnt = 0;
		for (int i = 1; i <= m; i++) {
			if (!check[i]) {
				cnt++;
				DFS(i);
			}
		}
		cout << cnt << endl;
	}
}

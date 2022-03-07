#include<iostream>
#include<string.h>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<map>
using namespace std;
vector<int> A[1001];
bool check[1001];
bool ok;
string res;
int m, n, u, v;
void DFS(int a, string s) {
	check[a] = true;
	for (auto b : A[a]) {
		if (!check[b]) {
			if (b == v) {
				ok = true;
				res = s + " " + to_string(b);
			}
			DFS(b, s + " " + to_string(b));
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++)A[i].clear();
		memset(check, false, sizeof(check));
		ok = false;
		res = "";
		cin >> m >> n >> u >> v;
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
		}
		DFS(u,to_string(u));
		if (!ok)cout << -1 << endl;
		else cout << res << endl;
	}
}

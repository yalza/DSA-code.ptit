#include <iostream>
#include <cstring>
#include <vector>
#include<stack>
#include<queue>
using namespace std;
vector<int> A[1005];
bool chuaxet[1005];
int truoc[1005];
int bfs(int d) {
	queue<int>hd;
	hd.push(d);
	chuaxet[d] = false;
	while (!hd.empty()) {
		int s = hd.front(); hd.pop();
		for (auto t: A[s]) {
			if (chuaxet[t] == true) {
				hd.push(t);
				chuaxet[t] = false;
				truoc[t] = s;
			}
			else if (truoc[s] != t)return 1;
		}
	}
	return 0;
}
int ktra(int v) {
	int kt = 0;
	for (int i = 1; i <= v; i++) {
		memset(chuaxet, true, sizeof(chuaxet));
		if (bfs(i))return 1;
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int v; cin >> v;
		for (int i = 0; i < 1005; i++)A[i].clear();
		memset(chuaxet, true, sizeof(chuaxet));
		memset(truoc, 0, sizeof(truoc));
		for (int i = 1; i <=v-1; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		if (ktra(v) == 1)cout << "NO" << endl;
		else cout << "YES" << endl;
	}
}

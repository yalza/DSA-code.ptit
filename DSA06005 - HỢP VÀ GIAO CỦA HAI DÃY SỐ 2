#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		vector<int> M(m), N(n);
		set<int> S, X, Y;
		for (int i = 0; i < m; i++) {
			cin >> M[i];
			S.insert(M[i]);
			X.insert(M[i]);
		}
		for (int i = 0; i < n; i++) {
			cin >> N[i];
			S.insert(N[i]);
			Y.insert(N[i]);
		}
		for (auto x : S)cout << x << " ";
		cout << endl;
		for (auto x : X)if (Y.count(x) != 0)cout << x << " ";
		cout << endl;
	}
}

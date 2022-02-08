#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		int M[1000000];
		set<int> X;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			X.insert(M[i]);
		}
		if (X.count(x) == 0)cout << -1 << endl;
		else cout << 1 << endl;
	}
}

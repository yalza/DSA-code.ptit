#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n, k; cin >> m >> n >> k;
		multiset<int> X;
		for (int i = 0; i < n + m; i++) {
			int a; cin >> a;
			X.insert(a);
		}
		int z = 0;
		for (auto x : X) {
			z++;
			if (z == k) {
				cout << x; break;
			}
		}
		cout << endl;
	}
}

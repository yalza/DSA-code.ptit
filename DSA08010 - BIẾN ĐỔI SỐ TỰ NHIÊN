#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
#include<set>

using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		queue<pair<int, int>> X;
		set<int> S; S.insert(n);
		X.push({ n, 0 });
		while (X.size()) {
			pair<int, int> x = X.front();
			X.pop();
			if (x.first == 1 || x.first == 2) {
				cout << x.second - 1 + x.first << endl;
				break;
			}
			if (S.count(x.first - 1) == 0) {
				X.push({ x.first - 1,x.second + 1 });
				S.insert(x.first - 1);
			}
			for (int i = 2; i * i <= x.first; i++) {
				if (x.first % i == 0 && S.count(x.first / i) == 0) {
					X.push({ x.first / i,x.second + 1 });
					S.insert(x.first / i);
				}
			}
		}
	}
}

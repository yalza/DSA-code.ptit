#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
int quay(vector<ll> M, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (M[i] > M[i + 1]) {
			return i + 1;
		}
	}
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<ll> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		cout << quay(M, n) << endl;
	}
}

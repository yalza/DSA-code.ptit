#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
string ktra(ll* M, int n) {
	for (int i = n - 1; i >= 2; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
			if (M[l] + M[r] == M[i])
				return "YES\n";
			if (M[l] + M[r] < M[i])l++;
			else r--;
		}
	}
	return "NO\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll M[10001];
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			M[i] *= M[i];
		}
		sort(M, M + n);
		cout << ktra(M, n);
	}
}

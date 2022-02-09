#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
string ktra(ll* M, int n, int k) {
	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			if (lower_bound(M + j + 1, M + n, k - M[i] - M[j]) - M != upper_bound(M + j + 1, M + n, k - M[i] - M[j]) - M)
				return "YES\n";
	return "NO\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		ll M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		cout << ktra(M, n, k);
	}
}

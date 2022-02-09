#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		ll M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		ll res = 0;
		for (int i = 0; i < n - 2; i++)
			for (int j = i + 1; j < n - 1; j++)
				res += lower_bound(M + j + 1, M + n, k - M[i] - M[j])-M-j-1;
		cout << res << endl;
	}
}

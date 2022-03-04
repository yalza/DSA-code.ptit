#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n, greater<int>());
		int res = 0;
		int l = 0, r = n / 2;
		while (l < n / 2 && r < n) {
			if (a[l] >= 2 * a[r]) {
				res++; l++; r++;
			}
			else
				r++;
		}
		cout << n - res << endl;
	}
}

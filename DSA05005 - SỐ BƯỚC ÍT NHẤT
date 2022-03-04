#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int N[1000];
		N[0] = 1;
		int res = 0;
		for (int i = 1; i < n; i++) {
			N[i] = 1;
			int m = 0;
			for (int j = 0; j < i; j++) {
				if (M[j] <= M[i]) {
					m = max(m, N[j]);
				}
			}
			N[i] += m;
			res = max(res, N[i]);
		}
		cout << n - res << endl;
	}
}

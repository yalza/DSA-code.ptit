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
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int A[100000], B[100000];
		A[0] = M[0]; B[n - 1] = M[n - 1];
		for (int i = 1; i < n; i++)A[i] = min(M[i], A[i - 1]);
		for (int i = n - 2; i >= 0; i--)B[i] = max(M[i], B[i + 1]);
		int res = -1;
		int a = 0, b = 0;
		while (b<n&&a<n) {
			if (A[a] < B[b]) {
				res = max(res, b - a);
				b++;
			}
			else a++;
		}
		if (res == 0)cout << -1 << endl;
		else
		cout << res << endl;
	}
}

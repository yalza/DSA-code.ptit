#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		long long res = 0;
		for (int i = 0; i < n; i++) {
			res += i * M[i];
			res %= 1000000007;
		}
		cout << res << endl;
	}
}

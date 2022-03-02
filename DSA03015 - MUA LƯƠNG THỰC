#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, s, m; cin >> n >> s >> m;
		if (s * m > (s - s / 7) * n)cout << -1;
		else {
			for (int i = 1; i <= s - s / 7; i++) {
				if (s * m <= n * i) {
					cout << i;
					break;
				}
			}
		}
		cout << endl;
	}
}

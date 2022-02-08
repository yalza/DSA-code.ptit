#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n,greater<>());
		if (M[n - 1] == M[0])cout << -1 << endl;
		else {
			cout << M[n - 1] << " ";
			for (int i = n - 2; i >= 0; i--) {
				if (M[i] != M[n - 1]) {
					cout << M[i] << endl;
					break;
				}
			}
		}
	}
}

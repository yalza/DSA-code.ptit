#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<sstream>
#include<string.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n), N(n, 1);
		for (int i = 0; i < n; i++)cin >> M[i];
		vector<int> S,F;
		S.push_back(-1);
		F.push_back(-1);
		for (int i = n-1; i >=0; i--) {
			N[i] = 1;
			for (int j = i + 1; j < n;) {
				if (M[j] >= M[i]) {
					N[i] += N[j];
					j += N[j];
					if (j >= n) {
						S.push_back(-1);
						break;
					}
				}
				else {
					S.push_back(M[j]); break;
				}
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			N[i] = 1;
			for (int j = i + 1; j < n;) {
				if (M[j] <= M[i]) {
					N[i] += N[j];
					j += N[j];
					if (j >= n) {
						F.push_back(-1);
						break;
					}
				}
				else {
					F.push_back(j); break;
				}
			}
		}
		reverse(S.begin(), S.end());
		reverse(F.begin(), F.end());
		for (auto x : F) {
			if (x == -1 || S[x] == -1)cout << -1 << " ";
			else cout << S[x] << " ";
		}
		cout << endl;
	}
}

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
		vector<pair<int, int>> M(n);
		int N[10000] = { 0 };
		for (int i = 0; i < n; i++) {
			cin >> M[i].first;
			N[M[i].first]++;
		}
		for (int i = 0; i < n; i++)M[i].second = N[M[i].first];
		vector<int> X(n, 1),S;
		S.push_back(-1);
		for (int i = n - 1; i >= 0; i--) {
			X[i] = 1;
			for (int j = i + 1; j < n;) {
				if (M[i].second >= M[j].second) {
					X[i] += X[j];
					j += X[j];
					if (j >= n) {
						S.push_back(-1);
						break;
					}
				}
				else {
					S.push_back(M[j].first); break;
				}
			}
		}
		reverse(S.begin(), S.end());
		for (auto a : S)cout << a << " ";
		cout << endl;
	}
}

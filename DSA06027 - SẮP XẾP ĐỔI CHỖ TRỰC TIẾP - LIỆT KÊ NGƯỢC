#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int x = 1;
		vector<vector<int>> N;

		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (M[i] > M[j]) {
					swap(M[i], M[j]);
				}
			}
			vector<int> X;
			for (int l = 0; l < n; l++)X.push_back(M[l]);
			N.push_back(X);
		}
		for (int i = N.size() - 1; i >= 0; i--) {
			cout << "Buoc " << i + 1 << ": ";
			for (int j = 0; j < n; j++)
				cout << N[i][j] << " ";
			cout << endl;
		}
	}
}

#include<iostream>
#include<vector>
using namespace std;
vector<int> M(11);
vector<vector<int>> X;
void Try(int i, int k, int sum, int n) {
	for (int j = k; j >= 1; j--) {
		if (sum + j <= n) {
			M[i] = j;
			if (sum + j == n) {
				vector<int> N;
				for (int l = 1; l <= i; l++)N.push_back(M[l]);
				X.push_back(N);
			}
			else Try(i + 1, j, sum + j, n);
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		X.clear();
		int n; cin >> n;
		Try(1, n, 0, n);
		cout << X.size() << endl;
		for (int i = 0; i < X.size(); i++) {
			cout << '(';
			for (int j = 0; j < X[i].size() - 1; j++)cout << X[i][j] << " ";
			cout << X[i][X[i].size() - 1] << ") ";
		}
		cout << endl;
	}
}

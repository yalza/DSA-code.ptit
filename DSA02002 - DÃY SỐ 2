#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x = n;
		int M[10000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int y = 0;
		vector < vector<int>> X;
		while (x--) {
			vector<int> Y;
			for (int i = y; i < n; i++)Y.push_back(M[i]);
			X.push_back(Y);
			y++;
			for (int i = n - 1; i >= 1; i--) {
				M[i] += M[i - 1];
			}
		}
		for (int i = X.size() - 1; i >= 0; i--) {
			cout << "[";
			for (int j = 0; j < X[i].size()-1; j++)cout << X[i][j] << " ";
			cout << X[i][X[i].size() - 1] << "] ";
		}
		cout << endl;
	}
}

#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n; cin >> n;
	int M[1000];
	vector<vector<int>> N;
	for (int i = 0; i < n; i++)cin >> M[i];
	for (int i = 1; i <= n; i++) {
		sort(M, M + i);
		vector<int> X;
		for (int l = 0; l < i; l++)X.push_back(M[l]);
		N.push_back(X);
	}
	for (int i = N.size() - 1; i >= 0; i--) {
		cout << "Buoc " << i << ": ";
		for (int j = 0; j < N[i].size(); j++)
			cout << N[i][j] << " ";
		cout << endl;
	}
}

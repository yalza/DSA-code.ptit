#include<iostream>
#include<vector>
using namespace std;
vector<int> M(11);
void test(int i, int k, int sum, int n) {
	for (int j = k; j >= 1; j--) {
		if (sum + j <= n) {
			M[i] = j;
			if (sum + j == n) {
				cout << "(";
				for (int l = 1; l < i; l++)cout << M[l] << " ";
				cout << M[i] << ") ";
			}
			else test(i + 1, j, sum + j, n);
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		test(1, n, 0, n);
		cout << endl;
	}
}

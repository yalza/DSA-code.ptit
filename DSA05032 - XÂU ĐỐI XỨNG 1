#include<iostream>
#include <cstring>
using namespace std;
int test(string s, int n) {
	int M[100][100];
	memset(M, 0, sizeof(M));
	for (int i = 0; i < n; i++)M[i][i] = 1;
	for (int i = n - 1; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] == s[j])M[i][j] += M[i + 1][j - 1] + 2;
			else {
				M[i][j] = max(M[i + 1][j], M[i][j - 1]);
			}
		}
	}
	return n - M[0][n - 1];
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s, s.length()) << endl;
	}
}

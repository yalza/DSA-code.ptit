#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
bool ok;
void Try(int i, vector<int> M, int n, string s) {
	if (ok)return;
	for (int j = 0; j < 10; j++) {
		M.push_back(j);
		if (i == n) {
			int x = 0;
			string X = s;
			for (int i = 0; i < s.length(); i++) {
				if (i != 3) {
					if (X[i] == '?')
						X[i] = M[x++] + '0';
				}
			}
			if (X[0] != '0' && X[5] != '0' && X[10] != '0') {
				int a = stoi(X.substr(0, 2));
				int b = stoi(X.substr(5, 2));
				int c = stoi(X.substr(10, 2));
				if (X[3] == '+')
					if (a + b == c) {
						cout << X << endl;
						ok = true;
						return;
					}
				if (X[3] == '-')
					if (a - b == c) {
						cout << X << endl;
						ok = true;
						return;
					}
				if (X[3] == '?') {
					if (a + b == c) {
						X[3] = '+';
						cout << X << endl;
						ok = true;
						return;
					}
					if (a - b == c) {
						X[3] = '-';
						cout << X << endl;
						ok = true;
						return;
					}
				}
			}
		}
		if (i < n)Try(i + 1, M, n, s);
		M.pop_back();
	}
}
int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		ok = false;
		getline(cin, s);
		int n = 0;
		for (int i = 0; i < s.length(); i++)
			if (s[i] == '?' && i != 3)n++;
		vector<int> M;
		Try(0, M, n, s);
		if (!ok)cout << "WRONG PROBLEM!\n";
	}
}

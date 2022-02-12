#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
vector<string> S;
void Try(vector<int> M,int n,int k,string s) {
	if (s.length() == n) {
		int x = 0;
		for (int i = 0; i < n; i++)x += M[i] * (s[i] - '0');
		if (x == k)S.push_back(s);
		return;
	}
	for (int i = 1; i >=0; i--) {
		Try(M, n, k, s + to_string(i));
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		S.clear();
		int n, k; cin >> n >> k;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M.begin(), M.end());
		Try(M, n, k, "");
		if (S.size() == 0)cout << -1;
		for (auto v : S) {
			vector<int> X;
			for (int i = 0; i < v.size(); i++) {
				if (v[i] == '1')X.push_back(M[i]);
			}
			cout << '[';
			for (int i = 0; i < X.size() - 1; i++)cout << X[i] << " ";
			cout << X[X.size() - 1] << "] ";
		}
		cout << endl;
	}
}

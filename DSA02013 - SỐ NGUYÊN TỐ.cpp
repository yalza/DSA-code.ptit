#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
using namespace std;
vector<int> X;
vector<string> S;
int n, p, s;
int snt(int n) {
	if (n < 2)return 0;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)return 0;
	return 1;
}
void Try(int i, string f, int sum,int x) {
	for (int j = i; j < X.size(); j++) {
		if (sum == s && x == n) {
			S.push_back(f);
			return;
		}
		else if (sum < s && x < n) Try(j + 1, f + to_string(X[j]) + " ", sum + X[j], x + 1);
		else return;
	}
}
int main() {
	for (int i = 2; i < 200; i++)
		if (snt(i))X.push_back(i);
	int t; cin >> t;
	while (t--) {
		cin >> n >> p >> s;
		S.clear();
		int b = upper_bound(X.begin(), X.end(), p) - X.begin();
		Try(b, "", 0, 0);
		cout << S.size() << endl;
		for (string s : S)cout << s << endl;
	}
}

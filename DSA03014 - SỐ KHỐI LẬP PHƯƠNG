#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
typedef long long int ll;
bool ktra(string a, string b) {
	int i = 0, j = 0;
	while (i < a.length() && j < b.length()) {
		if (a[i] == b[j]) {
			i++; j++;
		}
		else i++;
	}
	return j == b.length();
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long res = 0;
		bool ok = false;
		for (int i = 1; i <= 100; i++) {
			long long x = i * i * i;
			if (ktra(s, to_string(x))) {
				ok = true;
				res = x;
			}
		}
		if (!ok)cout << -1<<endl;
		else
		cout << res << endl;
	}
}

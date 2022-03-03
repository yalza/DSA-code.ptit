#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long res = 0;
		for (int i = 0; i < s.length(); i++) {
			res += s[i] - '0';
			for (int j = i + 1; j < s.length(); j++) {
				string f = "";
				for (int l = i; l <= j; l++) {
					f += s[l];
				}
				res += stoll(f);
			}
		}
		cout << res << endl;
	}
}

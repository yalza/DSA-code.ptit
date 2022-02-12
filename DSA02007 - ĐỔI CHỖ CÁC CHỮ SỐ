#include<iostream>
#include<string>
using namespace std;
void test(string s, string& a, int k) {
	if (k == 0)return;
	for (int i = 0; i < s.length() - 1; i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] < s[j]) {
				swap(s[i], s[j]);
				if (a < s)a = s;
				test(s, a, k - 1);
				swap(s[i], s[j]);
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; int k;
		cin >> k >> s;
		string a = s;
		test(s, a, k);
		cout << a << endl;
	}
}

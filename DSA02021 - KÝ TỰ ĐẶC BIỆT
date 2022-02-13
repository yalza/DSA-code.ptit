#include<iostream>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long  n; cin >> n;
		long long  a = s.length();
		while (a <= n)a *= 2;
		while (n > s.length()) {
			if (n > a / 2)n -= a / 2+1;
			if (n == a / 2)n--;
			a /= 2;
		}
		cout << s[n - 1] << endl;
	}
}

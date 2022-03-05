#include<iostream>
#include<string>
using namespace std;
int test1(string s) {
	int M[100] = { 0 };
	for (int i = 0; i < s.length(); i++) {
		if (s[i] - 48 > 5)return 0;
		M[s[i]]++;
	}
	for (int i = 0; i < 100; i++)
		if (M[i] > 1)return 0;
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int count = 0;
		for (int i = m; i <= n; i++) {
			if (test1(to_string(i)))
				count++;
		}
		cout << count << endl;
	}
}

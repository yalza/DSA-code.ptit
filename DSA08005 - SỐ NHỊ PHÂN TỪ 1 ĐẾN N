#include<iostream>
#include<queue>
#include<string>
using namespace std;
string coso(int n) {
	string s;
	while (n) {
		s = to_string(n % 2) + s;
		n /= 2;
	}
	return s;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) {
			cout << coso(i) << " ";
		}
		cout << endl;
	}
}

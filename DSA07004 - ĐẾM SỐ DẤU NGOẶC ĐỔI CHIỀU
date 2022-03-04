#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int count = 0;
		while (s.length()) {
			int x = s.find("()");
			if (x == -1) {
				if (s[0] == ')') {
					s[0] = '('; count++;
				}
				if (s[s.length() - 1] == '(') {
					s[s.length() - 1] = ')'; count++;
				}
			}
			else {
				s.erase(x, 2);
			}
		}
		cout << count << endl;
	}
}

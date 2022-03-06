#include<iostream>
#include<string>
#include<stack>
using namespace std;
int xxx(char x) {
	if (x == '+' || x == '-')return 1;
	if (x == '/' || x == '*')return 2;
	if (x == '%' || x == '^')return 3;
	return 0;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<char> x;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
				cout << s[i];
			else if (s[i] == '(')x.push(s[i]);
			else if (s[i] == ')') {
				while (x.size() && x.top() != '(') {
					cout << x.top();
					x.pop();
				}
				x.pop();
			}
			else {
				while (x.size() && xxx(x.top()) >= xxx(s[i])) {
					cout << x.top();
					x.pop();
				}
				x.push(s[i]);
			}
		}
		while (x.size()) {
			if (x.top() == '(')x.pop();
			else {
				cout << x.top();
				x.pop();
			}
		}
		cout << endl;
	}
}

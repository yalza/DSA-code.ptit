#include <iostream>
#include <stack>
#include<string>
using namespace std;
string ktra(string s) {
	stack<char> X;
	for (auto x : s) {
		if (X.empty() || x == '(' || x == '[' || x == '{')X.push(x);
		else {
			if (x == ')') {
				if (X.top() == '('&&x==')')X.pop();
				else return "NO\n";
			}
			if (x == ']') {
				if (X.top() == '[')X.pop();
				else return "NO\n";
			}
			if (x == '}') {
				if (X.top() == '{')X.pop();
				else return "NO\n";
			}
		}
	}
	if (X.size())return "NO\n";
	return "YES\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << ktra(s);
	}
}

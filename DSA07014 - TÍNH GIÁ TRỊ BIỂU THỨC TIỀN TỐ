#include<iostream>
#include<string>
#include<stack>
using namespace std;
int tinh(int a, int b, char c) {
	if (c == '+')return a + b;
	if (c == '-')return a - b;
	if (c == '*')return a * b;
	if (c == '/')return a / b;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<int> X;
		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] >= '0' && s[i] <= '9')X.push(s[i] - '0');
			else {
				int a = X.top(); X.pop();
				int b = X.top(); X.pop();
				X.push(tinh(a, b, s[i]));
			}
		}
		cout << X.top() << endl;
	}
}

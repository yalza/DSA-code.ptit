#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;
vector<string> A,S;
long long tinh(long long a, long long b, string c) {
	if (c == "+")return a + b;
	if (c == "-")return a - b;
	if (c == "*")return a * b;
	if (c == "/")return a / b;
}
int xxx(string x) {
	if (x == "+" || x == "-")return 1;
	if (x == "/" || x == "*")return 2;
	return 0;
}
void biendoi() {
	stack<string> x;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == "(")x.push(S[i]);
		else if (S[i] == ")") {
			while (x.size() && x.top() != "(") {
				A.push_back(x.top());
				x.pop();
			}
			x.pop();
		}
		else if (S[i] == "+" || S[i] == "-" || S[i] == "*" || S[i] == "/") {
			while (x.size() && xxx(x.top()) >= xxx(S[i])) {
				A.push_back(x.top());
				x.pop();
			}
			x.push(S[i]);
		}
		else A.push_back(S[i]);
	}
	while (x.size()) {
		if (x.top() == "(")x.pop();
		else {
			A.push_back(x.top());
			x.pop();
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		A.clear(); S.clear();
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				string a;
				for (int j = i; j < s.length(); j++) {
					if (s[j] >= '0' && s[j] <= '9')a += s[j];
					else break;
				}
				i += a.length() - 1;
				S.push_back(a);
			}
			else S.push_back(string(1, s[i]));
		}
		biendoi();
		stack<long long> X;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/") {
				long long  a = X.top(); X.pop();
				long long  b = X.top(); X.pop();
				X.push(tinh(b, a, A[i]));
			}
			else X.push(stoll(A[i]));
		}
		cout << X.top() << endl;
	}
}

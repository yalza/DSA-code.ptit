#include<iostream>
#include<string>
#include<stack>
using namespace std;
string test(string s) {
	stack<char> str;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ')') {
			string temp;
			while (str.size() && str.top() != '(') {
				temp = str.top() + temp;
				str.pop();
			}
			str.pop();
			char t;
			if (str.size())
				t = str.top();
			for (int j = 0; j < temp.length(); j++) {
				if (t == '-' && str.size()) {
					if (temp[j] == '-')
						str.push('+');
					else if (temp[j] == '+')
						str.push('-');
					else
						str.push(temp[j]);
				}
				else {
					str.push(temp[j]);
				}
			}
		}
		else
			str.push(s[i]);
	}
	string res;
	while (str.size()) {
		res = str.top() + res;
		str.pop();
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << test(s) << endl;
	}
}

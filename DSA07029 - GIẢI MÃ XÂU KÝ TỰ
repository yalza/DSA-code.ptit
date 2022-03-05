#include <iostream>
#include <stack>
#include<string>
using namespace std;
string xxx(string s) {
	stack<char> str;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ']') {
			string temp;
			while (str.size() && str.top() != '[') {
				temp = str.top() + temp;
				str.pop();
			}
			str.pop();
			string number;
			while (str.size() && isdigit(str.top())) {
				number = str.top() + number;
				str.pop();
			}
			int num = 1;
			if (number.size())
				num = stoi(number);
			string sss;
			for (int j = 0; j < num; j++)sss += temp;
			for (int j = 0; j < sss.length(); j++)
				str.push(sss[j]);
		}
		else {
			str.push(s[i]);
		}
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
		cout << xxx(s) << endl;
	}
}

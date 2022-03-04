#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	string s;
	int n;
	stack<int>nx;
	while (t--) {
		cin >> s;
		if (s == "PUSH") {
			cin >> n;
			nx.push(n);
		}
		else if (s == "POP" && !nx.empty())nx.pop();
		else if (s == "PRINT") {
			if (!nx.empty())cout << nx.top() << endl;
			else cout << "NONE" << endl;
		}
	}
}

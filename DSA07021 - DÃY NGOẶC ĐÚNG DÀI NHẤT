#include <iostream> 
#include <stack> 
using namespace std; 
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<int> X;
		X.push(-1);
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(')X.push(i);
			else {
				X.pop();
				if (X.size()>0) {
					
					count = max(count, i - X.top());
				}
				if (X.empty())X.push(i);
			}
		}
		cout << count << endl;
	}
}

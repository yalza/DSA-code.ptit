#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	deque<int> X;
	while (t--) {
		string s; cin >> s;
		if (s == "PUSHFRONT") {
			int x; cin >> x;
			X.push_front(x);
		}
		if (s == "PRINTFRONT") {
			if (X.size() == 0)cout << "NONE\n";
			else cout << X.front() << endl;
		}
		if (s == "POPFRONT" && X.size())X.pop_front();
		if (s == "PUSHBACK") {
			int x; cin >> x;
			X.push_back(x);
		}
		if (s == "PRINTBACK") {
			if (X.size() == 0)cout << "NONE\n";
			else cout << X.back() << endl;
		}
		if (s == "POPBACK" && X.size())X.pop_back();
	}
}

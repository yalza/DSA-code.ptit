#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	queue<int>hd;
	while (t--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int x;
			cin >> x;
			hd.push(x);
		}
		if (s == "POP" && hd.size() > 0) {
			hd.pop();
		}
		if (s == "PRINTFRONT") {
			if (hd.size() == 0)cout << "NONE" << endl;
			else cout << hd.front() << endl;
		}
	}
}

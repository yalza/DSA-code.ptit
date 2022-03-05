#include<iostream>
#include<queue>
#include<string>
using namespace std;
string load(int n) {
	queue<string> S;
	S.push("9");
	while (S.size()) {
		string s = S.front();
		S.pop();
		if (stoll(s) % n == 0)return s;
		S.push(s + "0");
		S.push(s + "9");
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << load(n) << endl;
	}
}

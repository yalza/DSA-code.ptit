#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<set>
using namespace std;
set<string> S;
queue<string> L;
void xoadaungoac(string s) {
	vector<pair<int, int>> X;
	stack<int> Z;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')Z.push(i);
		if (s[i] == ')') {
			X.push_back({ Z.top(),i });
			Z.pop();
		}
	}
	for (auto x : X) {
		string f = s; f.erase(x.first, 1);
		f.erase(x.second - 1, 1);
		if (S.count(f)==0) {
			L.push(f);
			S.insert(f);
		}
	}
}
int main() {
	string s; cin >> s;
	L.push(s);
	while (L.size()) {
		string g = L.front();
		L.pop();
		xoadaungoac(g);
	}
	for (auto c : S)cout << c << endl;
	
}

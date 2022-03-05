#include<iostream>
#include<queue>
#include<string>
using namespace std;
typedef long long ll;
int res = 0;
void load(string n) {
	queue<string> S;
	S.push("1");
	int l = 0;
	while (S.size()) {
		string s = S.front();
		S.pop();
		if (s.size()<n.size()||s.size()==n.size()&&s<=n)res++;
		else return;
		S.push(s + "0");
		S.push(s + "1");
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		string n; cin >> n;
		res = 0;
		load(n);
		cout << res << endl;
	}
}

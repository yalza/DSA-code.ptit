#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<queue>
using namespace std;
set<string> X;
int BFS(string a, string b) {
	if (a == b || X.count(b) == 0)return 0;
	int n = a.size();
	queue<pair<string,int>> S;
	S.push({ a,1 });
	while (S.size()) {
		string s = S.front().first;
		int cnt = S.front().second;
		if (s == b)return cnt;
		S.pop();
		for (int i = 0; i < n; i++) {
			char c = s[i];
			for (int j = 'A'; j <= 'Z'; j++) {
				s[i] = j;
				if (s == b)return cnt + 1;
				if (X.count(s) != 0) {
					X.erase(s);
					S.push({s,cnt+1});
				}
			}
			s[i] = c;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		X.clear();
		int n; string a, b;
		cin >> n >> a >> b;
		queue<string> A;
		int cnt = 0;
		while (n--) {
			string f; cin >> f;
			if (f != a)
				X.insert(f);
		}
		cout << BFS(a, b) << endl;
	}
}

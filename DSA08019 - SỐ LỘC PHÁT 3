#include<iostream>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;
typedef long long int ll;
vector<string> res;

int main() {
	int t; cin >> t;
	while (t--) {
		res.clear();
		int n; cin >> n;
		queue<string> S;
		S.push("6");
		S.push("8");
		int l = 0;
		while (l<=n) {
			string s = S.front();
			S.pop();
			res.push_back(s);
			S.push(s + "6");
			S.push(s + "8");
			l = S.front().length();
		}
		cout << res.size() << endl;
		for (int i = res.size() - 1; i >= 0; i--)cout << res[i] << " ";
		cout << endl;
	}
}

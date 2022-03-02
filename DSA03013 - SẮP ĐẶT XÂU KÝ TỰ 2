#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long int ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int d; cin >> d;
		string s; cin >> s;
		int M[1000] = { 0 };
		for (auto a : s)M[a]++;
		int cnt = 0;
		for (int i = 'A'; i <= 'Z'; i++)cnt = max(cnt, M[i]);

		if (s.length() % d == 0) {
			if (cnt > s.length() / d)cout << -1;
			else cout << 1;
		}
		else {
			if (cnt > s.length() / d+1)cout << -1;
			else cout << 1;
		}
		cout << endl;
	}
}

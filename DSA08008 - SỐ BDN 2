#include<iostream>
#include<string>
#include<sstream>
#include<queue>
using namespace std;
typedef long long int ll;
ll str(string s) {
	ll x = 0;
	for (int i = 0; i < s.length(); i++)
		x = x * 10 + s[i] - 48;
	return x;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		queue<string> p;
		p.push("1");
		while (1) {
			string s = p.front();
			string a = s + "0";
			string b = s + "1";
			if (str(a) % n == 0) {
				cout << a << endl; break;
			}
			if (str(b) % n == 0) {
				cout << b << endl; break;
			}
			p.pop();
			p.push(a);
			p.push(b);
		}
	}
}

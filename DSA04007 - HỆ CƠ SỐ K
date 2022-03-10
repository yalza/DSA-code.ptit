#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<math.h>
using namespace std;
string chuyen(int k, int n) {
	string res = "";
	while (n) {
		res = to_string(n % k)+res;
		n /= k;
	}
	return res;
}
int chuyen1(int k, string n) {
	int res = 0;
	for (int i = 0; i < n.length(); i++) {
		res = res * k + n[i] - '0';
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		string a, b; cin >> a >> b;
		int x = chuyen1(k,a);
		int y = chuyen1(k,b);
		int res = x + y;
		cout << chuyen(k, res) << endl;
	}
}

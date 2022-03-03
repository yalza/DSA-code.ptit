#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a, b;
		bool ok=false;
		for (int i = 2;i<n/4; i++) {
			if (7 * i >= n&&(7*i-n)%3==0) {
				a = (7 * i - n) / 3;
				b = i - a;
				ok = true;
				break;
			}
		}
		for (int i = 0; i < a; i++)cout << 4;
		for (int i = 0; i < b; i++)cout << 7;
		if (ok == false)cout << -1;
		cout << endl;
	}
} 

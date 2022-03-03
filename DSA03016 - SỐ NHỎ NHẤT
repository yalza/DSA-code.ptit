#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int s, d; cin >> s >> d;
		if (d * 9 < s)cout << -1 << endl;
		else {
			int M[1000000] = { 0 };
			s--;
			for (int i = d - 1; i >= 0; i--) {
				if (s >= 9) {
					M[i] = 9;
					s -= 9;
				}
				else {
					if (i == 0)M[i] = s + 1;
					else M[i] = s;
					s = 0;
				}
			}
			for (int i = 0; i < d; i++)cout << M[i];
			cout << endl;
		}
	}
}

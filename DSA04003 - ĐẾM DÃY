#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long a=2, k; cin >> k;
		long long  b = 1;
		k--;
		while (k > 1) {
			if (k % 2 == 0) {
				a *= a;
				a %= 123456789;
				k /= 2;
			}
			else {
				b *= a;
				b %= 123456789;
				k--;
			}
		}
		cout << (a * b) % 123456789 << endl;
	}
}

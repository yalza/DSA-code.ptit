#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		long long a, k; cin >> a >> k;
		long long  b = 1;                                                                    
		while (k>1) {
			if (k % 2 == 0) {
				a *= a;
				a %= 1000000007;
				k /= 2;
			}
			else {
				b *= a;
				b %= 1000000007;
				k--;
			}
		}
		cout << (a * b) % 1000000007 << endl;
	}
}

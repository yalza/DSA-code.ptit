#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		long long int m, n; cin >> m >> n;
		long long int c = __gcd(m, n);
		m /= c; n /= c;
		for (long long int i = 2; i < 100000000; i++) {
			if (m == 1) {
				cout << m << "/" << n << endl;
				break;
			}
			if (m * i - n > 0) {
				cout << 1 << "/" << i << " + ";
				long long int x = n * i;
				m = m * i - n;
				n = x;
				c = __gcd(m, n);
				m /= c; n /= c;
			}

		}

	}
}

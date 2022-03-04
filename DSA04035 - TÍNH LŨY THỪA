#include<iostream>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main() {
	while (1) {
		ll a, b; cin >> a >> b;
		if (a == 0 && b == 0)break;
		if (b == 0)a = 1;
		ll y = 1;
		while (1) {
			if (b == 1 || b == 0)break;
			if (b % 2 == 0) {
				a = (a % mod * a % mod) % mod;
				b /= 2;
			}
			else {
				y = (y % mod * a % mod) % mod;
				b -= 1;
			}
		}
		cout << (a % mod * y % mod) % mod << endl;
	}
}

#include<iostream>
using namespace std;
int test(long long int k, int x, int y) {
	if (k % 4 == 0 || (k - 2) % 4 == 0)return x;
	else if ((k - 1) % 4 == 0)return y;
	else {
		return test(k / 4, x + 2, y + 2);
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		long long n, k; cin >> n >> k;
		cout << test(k - 1, 1, 2) << endl;
	}
}

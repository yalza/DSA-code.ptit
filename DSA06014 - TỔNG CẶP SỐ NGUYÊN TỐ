#include<iostream>
#include<cmath>
using namespace std;
int snt(int n) {
	if (n < 2)return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)return 0;
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x = 0;
		for (int i = 2; i < n; i++) {
			if (snt(i) && snt(n - i))
			{
				x = 1;
				cout << i << " " << n - i << endl;
				break;
			}
		}
		if (x == 0)cout << -1 << endl;
	}
}

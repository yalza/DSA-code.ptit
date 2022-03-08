#include<iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x, y, z; cin >> n >> x >> y >> z;
		int M[10000] = { 0 };
		M[1] = x;
		for (int i = 2; i <= n; i++) {
			if (i % 2 == 0)M[i] = min(M[i - 1] + x, M[i / 2] + z);
			else M[i] = min(M[i - 1] + x, M[(i + 1) / 2] + z + y);
		}
		cout << M[n] << endl;
	}
}

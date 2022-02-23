#include<iostream>
using namespace std;
char M[100];
char test(long long int k, int x, int y) {
	if (k % 4 == 0 || (k - 2) % 4 == 0)return M[x];
	else if ((k - 1) % 4 == 0)return M[y];
	else {
		return test(k / 4, x + 2, y + 2);
	}
}
int main() {
	int t; cin >> t;
	for (int i = 65; i <= 90; i++)M[i - 64] = char(i);
	while (t--) {
		long long n, k; cin >> n >> k;
		cout << test(k - 1, 1, 2) << endl;
	}
}

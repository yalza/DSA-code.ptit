#include<iostream>
#include<string>
using namespace std;
long long M[93];
char fb(long long int n, long long int k) {
	if (n == 1)return 'A';
	if (n == 2)return 'B';
	if (k <= M[n - 2])return fb(n - 2, k);
	return fb(n - 1, k - M[n - 2]);
}
int main() {
	int t; cin >> t;
	M[1] = 1; M[2] = 1;
	for (int i = 3; i < 93; i++) {
		M[i] = M[i - 1] + M[i - 2];
	}
	while (t--) {
		long long int n, k; cin >> n >> k;
		cout << fb(n, k) << endl;

	}
}

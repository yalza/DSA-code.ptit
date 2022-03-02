#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int M[100000], N[100001] = { 0 };
	int res = 0;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
		N[M[i]] = N[M[i] - 1] + 1;
		res = max(res, N[M[i]]);
	}
	cout << n - res << endl;
}

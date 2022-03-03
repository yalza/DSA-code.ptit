#include<iostream>
using namespace std;


int bitonic(int* M, int n) {
	int dp1[1000], dp2[1000];
	for (int i = 0; i < n; i++) {
		dp1[i] = M[i];
		for (int j = 0; j < i; j++)
			if (M[i] > M[j])dp1[i] = max(dp1[i], dp1[j] + M[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		dp2[i] = M[i];
		for (int j = n - 1; j > i; j--)
			if (M[i] > M[j])dp2[i] = max(dp2[i], dp2[j] + M[i]);
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		res = max(res, dp1[i] + dp2[i] - M[i]);
	}
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1001];
		for (int i = 0; i < n; i++)cin >> M[i];
		cout << bitonic(M, n) << endl;
	}
}

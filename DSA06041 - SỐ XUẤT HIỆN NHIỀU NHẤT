#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int test(int* N, int n) {
	for (int i = 0; i <= 1000000; i++) {
		if (N[i] > n / 2)return i;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000001];
		for (int i = 0; i < n; i++)cin >> M[i];
		int N[1000001] = { 0 };
		for (int i = 0; i < n; i++)N[M[i]]++;
		if (test(N, n) == -1)cout << "NO" << endl;
		else cout << test(N, n) << endl;
	}
}

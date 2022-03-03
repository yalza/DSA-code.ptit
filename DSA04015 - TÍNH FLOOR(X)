#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[100000];
		M[n + 1] = 10000000;
		for (int i = 0; i < n; i++)cin >> M[i];
		int a = lower_bound(M, M + n-1, k) - M;
		if (k < M[0])cout << -1;
		else if (k > M[n - 1])cout << n - 1;
		else {
			if (M[a] == k)cout << a+1;
			else cout << a;
		}
		cout << endl;
	}
} 

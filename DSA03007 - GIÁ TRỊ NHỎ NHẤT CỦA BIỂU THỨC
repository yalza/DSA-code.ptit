#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000], N[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 0; i < n; i++)cin >> N[i];
		sort(M, M + n);
		sort(N, N + n,greater<>());
		long long res = 0;
		for (int i = 0; i < n; i++)res += M[i] * N[i];
		cout << res << endl;
	}
} 

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n,greater<>());
		for (int i = 0; i < n / 2; i++)
			cout << M[i] << " " << M[n - i - 1]<<" ";
		if (n % 2 == 1)cout << M[n / 2];
		cout << endl;
	}
}

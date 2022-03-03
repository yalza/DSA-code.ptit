#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		long long res = 0;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += M[i];
			if (sum <= 0)sum = 0;
			res = max(res, sum);
		}
		cout << res << endl;
	}
}

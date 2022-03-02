#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n>>k;
		int M[10000];
		int sum = 0,sum1=0,sum2=0;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			sum += M[i];
		}
		sort(M, M + n);
		for (int i = 0; i < n; i++) {
			if (i < k)sum1 += M[i];
			if (i < n - k)sum2 += M[i];
		}
		cout << max(sum - 2 * sum1, sum - 2 * sum2) << endl;
	}
}

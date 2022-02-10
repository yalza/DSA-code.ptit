#include<iostream>
#include<stdbool.h>
using namespace std;
int test(int* M, int k) {
	for (int i = 1; i <= k; i++)
		if (M[i] != i)return 0;
	return 1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[1000];
		for (int i = 1; i <= k; i++)cin >> M[i];
		M[0] = 0;
		if (test(M, k)) {
			for (int i = 1; i <= k; i++) {
				cout << n - k + i<<" ";
			}
		}
		
		else {
			for (int i = k; i >= 1; i--) {
				if (M[i] != M[i - 1]+1) {
					M[i]--;
					if (M[k] != n)
						for (int j = i + 1; j <= k; j++)
							M[j]++;
					break;
				}
			}
			for (int i = 1; i <= k; i++)cout << M[i] << " ";
		}
		cout << endl;

	}
}

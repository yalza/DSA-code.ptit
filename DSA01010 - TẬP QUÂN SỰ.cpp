#include<iostream>
using namespace std;

bool ok;
void sinh(int*M,int n,int k) {
	int i = k;
	while (M[i] == n - k + i)i--;
	if (i < 1)ok = true;
	else {
		M[i]++;
		for (int j = i + 1; j <= k; j++)M[j] = M[j - 1] + 1;
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		ok = false;
		int n, k; cin >> n >> k;
		int M[1000], N[1000];
		for (int i = 1; i <= k; i++)cin >> M[i], N[i] = M[i];
		sinh(M, n, k);
		if (ok)cout << k << endl;
		else {
			int count = 0;
			for (int i = 1; i <= k; i++)
				for (int j = 1; j <= k; j++)
					if (M[i] == N[j])count++;
			cout << k - count << endl;
		}
	}
}

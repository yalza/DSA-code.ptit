#include<iostream>
using namespace std;
int n;
int M[100], N[100], P[100];
int res = 0;
void Try(int i) {
	if (i == n+1) {
		res++;
		return;
	}
	for (int j = 1; j <= n; j++) {
		if (M[j] ==0&& N[j+i] ==0&& P[i-j+n] == 0) {
			M[j] = N[j+i] = P[i-j+n] = 1;
			Try(i + 1);
			M[j] = N[j+i] = P[i-j+n] = 0;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		res = 0;
		Try(1);
		cout << res << endl;
	}
}

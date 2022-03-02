#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string Ktra(int M[],int N[],int n) {
	for (int i = 0; i < n; i++)
		if (M[i] != N[i] && M[i] != N[n - i - 1])return "No\n";
	return "Yes\n";
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100],N[100];
		for (int i = 0; i < n; i++) {
			cin >> M[i]; N[i] = M[i];
		}
		sort(M, M + n);
		cout << Ktra(N, M, n);
	}
}

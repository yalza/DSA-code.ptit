#include<iostream>
#include<string>
using namespace std;
int n, k, ok = 1;
int M	[20];
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void sinh() {
	int i = k;
	while (i > 0 && M[i] == n - k + i)i--;
	if (i > 0) {
		M[i]++;
		for (int j = i + 1; j <= k; j++) {
			M[j] = M[i] + j - i;
		}
	}
	else ok = 0;
}
void xuat() {
	for (int i = 1; i <= k; i++)cout << s[M[i] - 1];
	cout << endl;
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		ok = 1;
		for (int i = 1; i <= k; i++)M[i] = i;
		while (ok) {
			xuat();
			sinh();
		}
	}
}

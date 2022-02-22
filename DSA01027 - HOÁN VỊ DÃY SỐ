#include<iostream>
#include<algorithm>
#include<stdbool.h>
using namespace std;
bool ok;
void sinh(int* M, int n) {
	int a = 0;
	for (int i = n-1; i > 0; i--) {
		if (M[i] < M[i + 1]) {
			a = 1;
			int k = n;
			while (M[i] > M[k])k--;
			swap(M[i], M[k]);
			int l = i + 1, r = n;
			while (l < r) {
				swap(M[l],M[r]);
				l++; r--;
			}
			break;
		}
	}
	if (a == 0)ok = true;
}
int main() {
	int n; cin >> n;
	int M[100];
	ok = false;
	for (int i = 1; i <= n; i++)cin >> M[i];
	sort(M + 1, M + n + 1);
	int N[100];
	for (int i = 1; i <= n; i++)N[i] = i;
	while (!ok) {
		for (int i = 1; i <= n; i++)cout << M[N[i]] << " ";
		cout << endl;
		sinh(N, n);
	}
}

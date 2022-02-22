#include<iostream>
using namespace std;
bool ok;
void sinh(int*M,int n) {
	int a = 0;
	for (int i = n; i >=1; i--) {
		if (M[i]==6) {
			a = 1;
			M[i]=8;
			for (int j = i + 1; j <= n; j++)M[j] = 6;
			break;
		}
	}
	if (a == 0)ok = true;
}
bool ktra(int* M, int n) {
	if (M[1] == 6 || M[n] == 8)return false;
	for (int i = 1; i < n; i++)if (M[i] == 8 && M[i + 1] == 8)return false;
	int dem = 1;
	for (int i = 1; i < n; i++) {
		if (M[i] == 6 && M[i + 1] == 6) {
			dem++;
		}
		else dem = 1;
		if (dem == 4)return false;
	}
	return true;
}
int main() {
	int n; cin >> n;
	int M[100];
	for (int i = 1; i < 100; i++)M[i] = 6;
	while (!ok) {
		if (ktra(M, n)) {
			for (int i = 1; i <= n; i++)cout << M[i];
			cout << endl;
		}
		sinh(M, n);
	}
}

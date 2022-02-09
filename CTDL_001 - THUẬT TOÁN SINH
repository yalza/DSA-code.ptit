#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

bool ok;
void sinh(int* M, int n) {
	int a = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (M[i] == 0) {
			M[i] = 1;
			for (int j = i + 1; j < n; j++) {
				M[j] = 0;
			}
			a = 1;
			break;
		}
	}
	if (a == 0)ok = true;
}
bool ktra(int* M, int n) {
	for (int i = 0; i < n; i++)
		if (M[i] != M[n - i - 1])return false;
	return true;
}
int main() {
	int n; cin >> n;
	int M[1000] = { 0 };
	while (!ok) {
		if (ktra(M, n)) {
			for (int i = 0; i < n; i++)cout << M[i] << " ";
			cout << endl;
		}
		sinh(M, n);
	}
}

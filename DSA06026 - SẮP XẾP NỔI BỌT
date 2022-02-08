#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int n; cin >> n;
	int M[1000];
	int gt = 1;
	for (int i = 0; i < n; i++) cin >> M[i];
	for (int i = 1; i < n; i++) {
		int k = 0;
		for (int j = 0; j < n - 1; j++) {
			if (M[j] > M[j + 1]) {
				swap(M[j], M[j + 1]);
				k++;
			}
		}
		if (k) {
			cout << "Buoc " << gt++ << ": ";
			for (int l = 0; l < n; l++)cout << M[l] << " ";
			cout << endl;
		}
	}
}

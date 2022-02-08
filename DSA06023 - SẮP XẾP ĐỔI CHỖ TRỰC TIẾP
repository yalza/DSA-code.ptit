#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n; cin >> n;
	int M[100000];
	for (int i = 0; i < n; i++)cin >> M[i];
	int x = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[i] > M[j]) {
				swap(M[i], M[j]);
				
			}
		}
		cout << "Buoc " << x++ << ": ";
		for (int l = 0; l < n; l++)cout << M[l] << " ";
		cout << endl;
	}
}

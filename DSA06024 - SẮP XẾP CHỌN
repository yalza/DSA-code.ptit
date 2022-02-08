#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int n; cin >> n;
	int M[1000];
	for (int i = 0; i < n; i++)cin >> M[i];
	for (int i = 0; i < n-1; i++) {
		int minn = i;
		for (int j = i + 1; j < n; j++) {
			if (M[minn] > M[j])minn = j;
		}
		swap(M[minn], M[i]);
		cout << "Buoc " << i + 1 << ": ";
		for (int l = 0; l < n; l++)cout << M[l] << " ";
		cout << endl;
	}
}

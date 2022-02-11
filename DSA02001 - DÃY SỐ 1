#include<iostream>
#include<vector>
using namespace std;


int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x = n;
		int M[10000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int y = 0;
		while (x--) {
			cout << "[";
			for (int i = y; i < n - 1; i++)cout << M[i] << " ";
			cout << M[n - 1] << "]\n";
			y++;
			for (int i = n - 1; i >= 1; i--) {
				M[i] += M[i - 1];
			}
			
		}
	}
}

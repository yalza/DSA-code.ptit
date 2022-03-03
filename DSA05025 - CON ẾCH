#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long M[10000] = { 0 };
		M[0] =1, M[1] =2, M[2] = 4;
		for (int i = 3; i < n; i++)M[i] = M[i - 1] + M[i - 2] + M[i - 3];
		cout << M[n-1] << endl;
	}
}

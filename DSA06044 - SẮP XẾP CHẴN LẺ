#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int n; cin >> n;
	vector<int> M(n), A, B;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
		if (i % 2 == 0)A.push_back(M[i]);
		else B.push_back(M[i]);
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),greater<>());
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)cout << A[a++]<<" ";
		else cout << B[b++]<<" ";
	}
}

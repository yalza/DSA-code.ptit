#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		ll A[100000], B[100000];
		A[0] = M[0];
		B[n - 1] = M[n - 1];
		for (int i = 1; i < n; i++)A[i] = max(A[i - 1], M[i]);
		for (int i = n - 2; i >= 0; i--)B[i] = min(B[i + 1], M[i]);
		int cnt = 0;
		for (int i = 0; i < n - 1; i++) {
			if (A[i] <= B[i + 1])cnt++;
		}
		cout << cnt << endl;
		for (int i = 0; i < n-1; i++) {
			if (A[i] <= B[i + 1])cout << i + 1 << " ";
		}
		cout << endl;
	}
}

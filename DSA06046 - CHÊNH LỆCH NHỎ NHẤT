#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100001];
		for (int i = 0; i < n; i++)cin >> M[i];
		sort(M, M + n);
		int res = INT_MAX;
		for (int i = 0; i < n - 1; i++)res = min(res, (M[i + 1]) - M[i]);
		cout << res <<endl;
	}
}

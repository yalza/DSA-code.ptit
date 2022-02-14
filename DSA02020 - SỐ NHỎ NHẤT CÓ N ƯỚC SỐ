#include<iostream>
#include<climits>
using namespace std;
typedef long long ll;
int M[] = { 2,3,5,7,11,13,17,19,23,29 };
ll res;
int n;
void Try(int i,ll x,ll y) {
	if (y > n)return;
	if (y == n)res = min(res, x);
	for (int j = 1;; j++) {
		if (x * M[i] > res)break;
		x *= M[i];
		Try(i + 1,x, y * (j + 1));
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n;
		res = 1e18;
		Try(0, 1, 1);
		cout << res << endl;
	}
}

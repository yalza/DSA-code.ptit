#include<iostream>
#include<set>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
struct XX {
	int a, b;
};
bool cmp(XX A, XX B) {
	return A.a < B.a;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		XX M[100000];
		for (int i = 0; i < n; i++) {
			cin >> M[i].a; M[i].b = i;
		}
		sort(M, M + n, cmp);
		vector<XX> S;
		for (int i = 1; i < n-1; i++) {
			if (M[i].a == M[i - 1].a || M[i].a == M[i + 1].a)S.push_back(M[i]);
		}
		int res = 0;
		int min = INT_MAX;
		for (XX x : S) {
			if (min > x.b) {
				min = x.b;
				res = x.a;
			}
		}
		if (S.size() == 0)cout << "NO\n";
		else
		cout << res << endl;
	}
}

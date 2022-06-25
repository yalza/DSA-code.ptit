#include<bits/stdc++.h>
#define mod                 1000000007
#define ll                  long long
#define	p(x)                pair<x,x>
#define v(x)                vector<x>
#define Tree                node*
#define sz(a)               a.size()
#define x                   first
#define y                   second
#define pb(a)               push_back(a)
#define pf(a)               push_front(a)
#define FOR(i, l, r)        for (int i = l; i < r; i++)
#define FORX(i, l, r, x)    for (int i = l; i < r; i += x)
#define FORD(i, l, r)       for (int i = l; i >= r; i--)
#define correct(x, y, n, m) 0 <= (x)&&(x) < (n)& & 0 <= (y)&&(y) < (m)
#define cin(M, n)           FOR(i, 0, n)cin >> M[i]
#define cout(M, n)          FOR(i, 0, n)cout << M[i] << " "
#define rs(M, x)            memset(M, x, sizeof(M))
#define reset()             FOR(i, 0, 1001)A[i].clear(), check[i] = false
#define faster()            cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()               int t; cin >> t; while (t--)
#define pq(x)               priority_queue<x>
#define neg_pq(x)           priority_queue<x, vector<x>, greater<x>>
#define all(M)              M.begin(), M.end()
using namespace std;

//_______________________NGUYỄN_NGỌC_TOÀN_______________________//

struct matran {
	ll f[2][2] = {
		{1, 1},
		{1, 0}
	};
};

matran operator*(matran A, matran B) {
	matran C;
	FOR(i, 0, 2) {
		FOR(j, 0, 2) {
			C.f[i][j] = 0;
			FOR(l, 0, 2) {
				C.f[i][j] += A.f[i][l] % mod * B.f[l][j] % mod;
				C.f[i][j] %= mod;
			}
		}
	}
	return C;
}

matran Pow(matran A, int k) {
	if (k == 1)return A;
	matran tmp = Pow(A, k / 2);
	if (k % 2 == 0)return tmp * tmp;
	else return tmp * tmp * A;
}

int main() {
	faster();
	run() {
		int n; cin >> n;
		matran A;
		matran res = Pow(A, n);
		cout << res.f[1][0] << endl;
	}

}

//__________________________B20DCPT173__________________________//

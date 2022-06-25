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

int main() {
	faster();
	run() {
		int m, n, p; cin >> m >> n >> p;
		string a, b, c; cin >> a >> b >> c;
		int dp[101][101][101];
		FOR(i, 0, sz(a) + 1) {
			FOR(j, 0, sz(b) + 1) {
				FOR(l, 0, sz(c) + 1) {
					if (i == 0 || j == 0 || l == 0)dp[i][j][l] = 0;
					else {
						if (a[i - 1] == b[j - 1] && a[i - 1] == c[l - 1])dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
						else dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j][l - 1], dp[i][j - 1][l]));
					}
				}
			}
		}
		cout << dp[sz(a)][sz(b)][sz(c)] << endl;
	}
}

//__________________________B20DCPT173__________________________//

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

int n;
int M[100][100];
v(string) S;

void Try(int x, int y, string s) {
	if (x >= n || y >= n)return;
	if (M[x][y] == 0)return;
	if (x == n - 1 && y == n - 1) {
		S.pb(s);
		return;
	}
	Try(x + 1, y, s + "D");
	Try(x, y + 1, s + "R");
}

int main() {
	faster();
	run() {
		cin >> n;
		FOR(i, 0, n)FOR(j, 0, n)cin >> M[i][j];
		S.clear();
		Try(0, 0, "");
		if (sz(S) == 0)cout << -1 << endl;
		else {
			for (auto c : S)cout << c << " ";
			cout << endl;
		}

	}
}

//__________________________B20DCPT173__________________________//

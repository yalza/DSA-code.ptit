#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<climits>
#include<set>
#define ll long long
#define	p(x) pair<x,x> 
#define v(x) vector<x>
#define FORD(i,l,r) for(int i=l;i<r;i++)
#define FORE(i,l,r) for(int i=r-1;i>=0;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define sz size();
#define all(M) M.begin(),M.end()
#define	f first
#define s second
#define pb push_back
#define pf push_font
using namespace std;

//____________________T_O_A_N_______________________//


int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[4][10000];
		int res = INT_MIN;
		FORD(i, 0, 4)FORD(j, 0, n)cin >> M[i][j], res = max(res, M[i][j]);
		if (res <= 0)cout << res << endl;
		else {
			FORD(i, 0, 4)FORD(j, 0, n)if (M[i][j] < 0)M[i][j] = 0;
			int dp[10000][4][4];
			memset(dp, INT_MIN, sizeof(dp));
			v(p(int)) X;
			set<int> Y;
			FORD(i, 0, n) {
				bool ok = false;
				FORD(j, 0, 4)if (M[j][i] > 0)ok = true;
				if (!ok)Y.insert(i);
			}
			FORD(i, 0, n) {
				X.clear();
				FORD(j, 0, 4) {
					dp[i][j][j] = M[j][i];
					X.pb({ j,j });
					for (int l = j + 2; l < 4; l++) {
						dp[i][j][l] = M[j][i] + M[l][i];
						X.pb({ j,l });
					}
				}
			}
			res = 0;
			FORD(i, 1, n) {
				int mayy = 0;
				if (i > 1)for (auto y : X)mayy = max(mayy, dp[i - 2][y.f][y.s]);
				for (auto x : X) {
					int maxx = 0, mazz = INT_MIN;
					for (auto y : X) {
						if (x.f != y.f && x.f != y.s && x.s != y.f && x.s != y.s) maxx = max(mayy, max(maxx, dp[i - 1][y.f][y.s]));
						mazz = max(mazz, dp[i - 1][y.f][y.s]);
					}
					if (Y.count(i) != 0)dp[i][x.f][x.s] = dp[i][x.f][x.s] + mazz;
					else dp[i][x.f][x.s] = dp[i][x.f][x.s] + maxx;
				}
			}
			FORD(i, 0, n) for (auto x : X)res=max(res,dp[i][x.f][x.s]);
			cout << res << endl;
		}
	}
	return 0;
}

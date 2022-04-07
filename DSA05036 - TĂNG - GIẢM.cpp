#include<iostream>
#include<vector>
#include<algorithm>
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
		int n, dp[100000]; cin >> n;
		v(p(float)) M(n);
		FORD(i, 0, n)cin >> M[i].f >> M[i].s;
		int res = 1;
		FORD(i, 0, n) {
			dp[i] = 1;
			FORE(j, 0, i) {
				if (M[i].f > M[j].f && M[i].s < M[j].s)
					dp[i] = max(dp[i], dp[j] + 1);
			}
			res = max(res, dp[i]);
		}
		cout << res << endl;
	}
}

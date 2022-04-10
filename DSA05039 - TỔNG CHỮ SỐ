#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<climits>
#include<set>
#define mod 1000000007
#define ll long long
#define	p(x) pair<x,x> 
#define v(x) vector<x>
#define FORD(i,l,r) for(int i=l;i<r;i++)
#define FORE(i,l,r) for(int i=l-1;i>=r;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define sz size();
#define all(M) M.begin(),M.end()
#define	f first
#define s second
#define pb push_back
#define pf push_font
using namespace std;

//______________________________T_O_A_N______________________________//

int dp[901][8101];

int Load(int a, int b) {
	if (a > b || a < 0 || b < 0 || a>900 || b>8100)return -1;
	if (a == 0 && b == 0)return 0;
	if (dp[a][b] != -1)return dp[a][b];
	int minn = 101;
	FORE(i, 10, 1) {
		int tmp = Load(a - i, b - i * i);
		if (tmp != -1)minn = min(minn, tmp + 1);
	}
	return dp[a][b] = minn;
}


int main() {
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		memset(dp, -1, sizeof(dp));
		dp[0][0] = 0;
		int x = Load(a, b);
		if (x == -1 || x > 100) {
			cout << -1 << endl;
			continue;
		}
		while (a>0&&b>0) {
				for (int i = 1; i <= 9; i++) {
					if (a >= i && b >= i*i &&1+dp[a - i][b - i * i]== dp[a][b]) {
						cout << i; a -= i; b -= i * i;
						break;
					}
				}
			}
		cout << endl;
	}
}

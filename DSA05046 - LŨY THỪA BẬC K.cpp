#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
#include<climits>
#include<set>
#include<map>
#include<stack>
#include<queue>
#define mod				 1000000007
#define ll				 unsigned long long
#define	p(x)			 pair<x,x> 
#define v(x)			 vector<x>
#define pb(a)			 push_back(a)
#define pf(a)			 push_front(a)
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)		 FOR(i,0,n)cin>>M[i]
#define cout(M,n)		 FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)		     memset(M,x,sizeof(M))
#define reset()			 FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)
#define pq(x )			 priority_queue<x>
#define neg_pq(x)		 priority_queue<x, vector<x>, greater<x>>
#define all(M)			 M.begin(),M.end()
	using namespace std;

//_______________________T_O_A_N________________________//

ll n, k;
ll C[1050][1050];

ll Pow(ll a, ll n) {
	if (n == 1) return a % mod;
	ll tmp = Pow(a, n / 2);
	if (n % 2) return ((tmp % mod * tmp % mod) % mod) * a % mod;
	return (tmp % mod * tmp % mod) % mod;
}

void to_hop() {
	FOR(i, 0, 1050) {
		FOR(j, 0, i + 1) {
			if (j == 0 || i == j)C[i][j] = 1;
			else C[i][j] = C[i - 1][j - 1] % mod + C[i - 1][j] % mod;
			C[i][j] %= mod;
		}
	}
}

ll Load(ll n, ll k) {
	if (k == 0)return n % mod;
	ll dp[1050];
	dp[0] = n % mod;
	n %= mod;
	ll tmp = n + 1;
	FOR(i, 1, k + 1) {
		tmp = (tmp * (n + 1) % mod) % mod;
		dp[i] = (tmp - 1 + mod) % mod;
		ll sum = 0;
		FOR(j, 0, i)sum = (sum % mod + (dp[j] % mod * C[i + 1][i - j + 1] % mod) % mod) % mod;
		sum %= mod;
		dp[i] = (dp[i] + mod - sum) % mod;
		dp[i] = dp[i] * Pow(i + 1, mod - 2) % mod;
		dp[i] %= mod;
	}
	return dp[k];
}

int main() {
	faster();
	to_hop();
	run() {
		cin >> n >> k;
		cout << Load(n, k) << endl;
	}
}
//_______________________T_O_A_N________________________//

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
#define tree			 node*
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

bool check[1001];
v(int) A[1001];
int res = 0;
bool ok;
void DFS(int u, int count, int v) {
	if (ok)return;
	check[u] = true;
	if (u == v) {
		res = count;
		ok = true;
		return;
	}
	for (auto x : A[u])if (!check[x])DFS(x, count + 1, v);
}

int main() {
	faster();
	run() {
		reset();
		int n; cin >> n;
		FOR(i, 0, n - 1) {
			int u, v; cin >> u >> v;
			A[u].push_back(v);
			A[v].push_back(u);
		}
		int q; cin >> q;
		while (q--) {
			res = 0;
			ok = false;
			rs(check, false);
			int u, v; cin >> u >> v;
			DFS(u, 0, v);
			cout << res << endl;
		}
	}
}



//_______________________T_O_A_N________________________//

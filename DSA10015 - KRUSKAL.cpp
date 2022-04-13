#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<string.h>
#include<string>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#define ll				 long long
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


int n, m;
bool check[1001];
v(int) A[1001];

struct kru {
	int u, v, w;
};


v(kru) V;

bool cmp(kru a, kru b) {
	return a.w < b.w;
}

void DFS(int u) {
	check[u] = true;
	for (auto x : A[u])if (!check[x])DFS(x);
}

int main() {
	faster();
	run() {
		reset();
		V.clear();
		cin >> n >> m;
		FOR(i, 0, m) {
			kru a; cin >> a.u >> a.v >> a.w;
			V.pb(a);
		}
		sort(all(V), cmp);
		int res = 0;
		for (auto x : V) {
			rs(check, false);
			DFS(x.u);
			if (!check[x.v]) {
				res += x.w;
				A[x.u].push_back(x.v);
				A[x.v].push_back(x.u);
			}
		}
		cout << res << endl;
	}
}


//_______________________T_O_A_N________________________//

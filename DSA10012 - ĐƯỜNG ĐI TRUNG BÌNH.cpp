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

int BFS(int u, int v) {
	check[u] = true;
	queue<p(int)> Q;
	Q.push({ u,0 });
	while (Q.size()) {
		p(int) tmp = Q.front(); Q.pop();
		if (tmp.first == v)return tmp.second;
		for (auto x : A[tmp.first])if (!check[x])Q.push({ x,tmp.second + 1 }), check[x] = true;
	}
	return -1;
}

int main() {
	faster();
	run() {
		reset();
		cin >> n >> m;
		FOR(i, 0, m) {
			int a, b; cin >> a >> b;
			A[a].pb(b);
		}
		int res = 0, cnt = 0;
		FOR(i, 1, n + 1) {
			FOR(j, 1, n + 1) {
				rs(check, false);
				if (i != j) {
					int f = BFS(i, j);
					if (f != -1)res += f, cnt++;
				}
			}
		}
		cout << setprecision(2) << fixed << res * 1.0 / cnt << endl;
	}
}


//_______________________T_O_A_N________________________//

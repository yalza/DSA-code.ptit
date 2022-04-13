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
v(int) A[1001];
bool check[1001];
int W[1001][1001];
bool ok;
bool BFS(int u) {
	check[u] = true;
	queue<p(int)> Q;
	Q.push({ u,0 });
	while (Q.size()) {
		p(int) tmp = Q.front(); Q.pop();
		for (auto x: A[tmp.first]) {
			if (!check[x]) {
				Q.push({ tmp });
				Q.push({ x,tmp.second + W[tmp.first][x] });
				check[x] = true;
				break;
			}
			else if (x == u && tmp.second + W[tmp.first][x] < 0)return true;
		}
	}
	return false;
}

bool ktra() {
	FOR(i, 1, n + 1) {
		rs(check, false);
		if (BFS(i))return true;
	}
	return false;
}

int main() {
	faster();
	run() {
		reset();
		ok = false;
		cin >> n >> m;
		FOR(i, 0, m) {
			int u, v, w; cin >> u >> v >> w;
			A[u].pb(v);
			W[u][v] = w;
		}
		cout << ktra() << endl;
	}
}


//_______________________T_O_A_N________________________//

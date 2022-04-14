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


int n, m, s;
bool check[1001];
v(p(int)) A[1001];

void Dijkstra(int s) {
	vector<int> d(n + 10000, 1000000000);
	d[s] = 0;
	neg_pq(p(int)) Q;
	Q.push({ 0,s });
	while (Q.size()) {
		p(int) tmp = Q.top();
		Q.pop();
		for (auto x : A[tmp.second]) {
			if (d[x.first] > x.second+d[tmp.second]) {
				d[x.first] = x.second + d[tmp.second];
				Q.push({d[x.first],x.first});
			}
		}
	}
	FOR(i, 1, n + 1)cout << d[i] << " ";
	cout << endl;
}

int main() {
	faster();
	run() {
		reset();
		cin >> n >> m >> s;
		FOR(i, 0, m) {
			int u, v, w; cin >> u >> v >> w;
			A[u].push_back({ v,w });
			A[v].push_back({ u,w });
		}
		Dijkstra(s);
	}
}

//_______________________T_O_A_N________________________//

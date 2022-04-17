#include<iostream>
#include<math.h>
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
#define float double
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

float dis[1000][1000];
bool check[1001];
v(int) A[1001];
int n;
float Dis(p(float) A, p(float) B) {
	return sqrt((A.first - B.first) * (A.first - B.first) + (A.second - B.second) * (A.second - B.second));
}

struct kru {
	int u, v;
	float w;
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
		cin >> n;
		v(p(float)) M(n);
		for (auto& x : M)cin >> x.first >> x.second;
		FOR(i, 1, n + 1) {
			FOR(j, 1, n + 1)dis[i][j] = Dis(M[i - 1], M[j - 1]);
		}
		FOR(i, 1, n + 1) {
			FOR(j, 1, n + 1) {
				V.push_back({ i,j,dis[i][j] });
			}
		}
		sort(all(V), cmp);
		float res = 0;
		for (auto x : V) {
			rs(check, false);
			DFS(x. u);
			if (!check[x.v]) {
				res += x.w;
				A[x.u].push_back(x.v);
				A[x.v].push_back(x.u);
			}
		}
		cout << setprecision(6) << fixed << res << endl;
	}
}

//_______________________T_O_A_N________________________//

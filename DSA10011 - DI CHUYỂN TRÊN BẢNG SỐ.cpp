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
int M[501][501];
int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

struct edge {
	int x, y, w;
};

bool operator<(const edge& A, const edge& B) {
	if (A.w == B.w) {
		if (A.x == B.x)
			return A.y < B.y;
		else return A.x < B.x;
	}
	return A.w < B.w;
}
int di_Chuyen_Tren_Bang_So() {
	set<edge> S;
	int d[501][501];
	FOR(i, 0, n)FOR(j, 0, m)d[i][j] = 1000000000;
	d[0][0] = M[0][0];
	S.insert({ 0,0,0 });
	while (S.size()) {
		edge tmp = *S.begin();
		S.erase(S.begin());
		FOR(i, 0, 4) {
			int a = tmp.x + dx[i];
			int b = tmp.y + dy[i];
			if (correct(a, b, n, m)) {
				if (d[a][b] > d[tmp.x][tmp.y] + M[a][b]) {
					if (d[a][b] != 1000000000)S.erase(S.find({ a,b,d[a][b] }));
					d[a][b] = d[tmp.x][tmp.y] + M[a][b];
					S.insert({ a,b,d[a][b] });
				}
			}
		}
	}
	return d[n - 1][m - 1];
}

int main() {
	faster();
	run() {
		cin >> n >> m;
		FOR(i, 0, n)FOR(j, 0, m)cin >> M[i][j];
		cout << di_Chuyen_Tren_Bang_So() << endl;
	}
}

//_______________________T_O_A_N________________________//

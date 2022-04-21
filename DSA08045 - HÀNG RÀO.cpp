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
#define ll				 unsigned long long
#define	p(x)			 pair<x,x> 
#define v(x)			 vector<x>
#define tree			 node*
#define pb(a)			 push_back(a)
#define pf(a)			 push_front(a)
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<(x)&&(x)<(n)&&0<(y)&&(y)<(m)
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
int XX, YY;
struct fen {
	int x1, x2, y1, y2;
};
struct cow {
	int x, y;
};
fen M[10000];
cow N[10000];
char C[2000][2000];
bool check[2000][2000];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };

void init() {
	rs(check, false);
	set<int> S;
	map<int, int> X;
	FOR(i, 0, n)S.insert(M[i].x1), S.insert(M[i].x2);
	FOR(i, 0, m)S.insert(N[i].x);
	int i = 2;
	for (auto s : S)X[s] = i, i += 2;
	XX = i + 10;
	FOR(i, 0, n)M[i].x1 = X[M[i].x1], M[i].x2 = X[M[i].x2];
	FOR(i, 0, m)N[i].x = X[N[i].x];
	S.clear();
	X.clear();
	FOR(i, 0, n)S.insert(M[i].y1), S.insert(M[i].y2);
	FOR(i, 0, m)S.insert(N[i].y);
	i = 2;
	for (auto s : S)X[s] = i, i += 2;
	YY = i + 10;
	FOR(i, 0, n)M[i].y1 = X[M[i].y1], M[i].y2 = X[M[i].y2];
	FOR(i, 0, m)N[i].y = X[N[i].y];
	FOR(i, 0, XX)FOR(j, 0, YY)C[i][j] = '.';
	FOR(i, 0, m)C[N[i].x][N[i].y] = 'O';
	FOR(i, 0, n) {
		fen x = M[i];
		FOR(l, x.x1, x.x2 + 1)FOR(k, x.y1, x.y2 + 1)C[l][k] = 'X';
	}
}

void DFS(cow u) {
	check[u.x][u.y] = true;
	FOR(i, 0, 4) {
		int x = u.x + dx[i];
		int y = u.y + dy[i];
		if (correct(x, y, XX - 1, YY - 1) && C[x][y] != 'X' && !check[x][y])DFS({ x,y });
	}
}

int main() {
	faster();
	run() {
		cin >> n >> m;
		FOR(i, 0, n) {
			cin >> M[i].x1 >> M[i].y1 >> M[i].x2 >> M[i].y2;
			if (M[i].x1 > M[i].x2)swap(M[i].x1, M[i].x2);
			if (M[i].y1 > M[i].y2)swap(M[i].y1, M[i].y2);
		}
		FOR(i, 0, m)cin >> N[i].x >> N[i].y;
		init();
		int res = 0;
		int tmp = 0;
		FOR(i, 0, m) {
			if (!check[N[i].x][N[i].y]) {
				DFS(N[i]);
				int count = 0;
				FOR(j, 0, m)if (check[N[j].x][N[j].y])count++;
				res = max(res, count - tmp);
				tmp = count;
			}
		}
		cout << res << endl;
	}
}




//_______________________T_O_A_N________________________//

#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<string>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#define ll			 long long
#define	p(x)		 pair<x,x> 
#define v(x)		 vector<x>
#define FORD(i,l,r)  for(int i=l;i<r;i++)
#define FORE(i,l,r)  for(int i=r-1;i>=0;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define cin(M,n)	 FORD(i,0,n)cin>>M[i]
#define cout(M,n)	 FORD(i,0,n)cout<<M[i]
#define rs(M,x)		 memset(check,x,sizeof(check))
#define reset()		 FORD(i, 0, 1001)A[i].clear()
#define run()		 int t; cin >> t; while (t--)
#define pq(x )		 priority_queue<x>
#define neg_pq(x)	 priority_queue<x, vector<x>, greater<x>>
#define all(M)		 M.begin(),M.end()
using namespace std;

//_______________________T_O_A_N________________________//


int n, m, k;
bool check[1001][1001];
v(int) A[1001];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
set<p(p(int))> S;
v(p(int)) X;

void DFS(p(int) u) {
	check[u.first][u.second] = true;
	FORD(i, 0, 4) {
		int x = u.first + dx[i];
		int y = u.second + dy[i];
		if (correct(x-1,y-1,n,n)&&!check[x][y] && S.count({u,{x,y}}) == 0)DFS({x,y});
	}
}


int main() {
	
	cin >> n >> k >> m;
	FORD(i, 0, m) {
		int a, b, c, d; cin >> a >> b >> c >> d;
		S.insert({ {a,b},{c,d} });
		S.insert({ {c,d},{a,b} });
	}
	FORD(i, 0, k) {
		int a, b; cin >> a >> b;
		X.push_back({ a,b });
	}
	int count = 0;
	for (auto x : X) {
		rs(check, false);
		DFS(x);
		for (auto y : X) {
			if (!check[y.first][y.second])count++;
		}
	}
	cout << count / 2 << endl;
	
}


//_______________________T_O_A_N________________________//

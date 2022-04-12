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
#define rs(M,x)		 memset(M,x,sizeof(M))
#define reset()		 FORD(i, 0, 1001)A[i].clear(),check[i]=false
#define run()		 int t; cin >> t; while (t--)
#define pq(x )		 priority_queue<x>
#define neg_pq(x)	 priority_queue<x, vector<x>, greater<x>>
#define all(M)		 M.begin(),M.end()
using namespace std;

//_______________________T_O_A_N________________________//


int n, m, v;
bool check[1001];
int M[1001];
v(int) A[1001];

string BFS() {
	int maxx = 1;
	FORD(i, 1, n + 1)M[i] = 1;
	FORD(i, 1, n + 1) {
		if (!check[i]) {
			check[i] = true;
			queue<int> Q;
			Q.push(i);
			while (Q.size()) {
				int tmp = Q.front(); Q.pop();
				for (auto x : A[tmp]) {
					if (M[x] == M[tmp])M[x]++;
					maxx = max(maxx, max(M[x], M[tmp]));
					if (maxx > v)return "NO\n";
					if (!check[x])Q.push(x), check[x] = true;
				}
			}
		}
	}
	return "YES\n";
}


int main() {
	run() {
		reset();
		cin >> n >> m >> v;
		FORD(i, 0, m) {
			int a, b; cin >> a >> b;
			A[a - 1].push_back(b - 1);
			A[b - 1].push_back(a - 1);
		}
		cout << BFS();
	}
	
}


//_______________________T_O_A_N________________________//

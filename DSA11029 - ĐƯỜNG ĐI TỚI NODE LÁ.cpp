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

v(int) A[1001];
bool check[1001];

v(string) res;

void DFS(int u,string s) {
	if (A[u].empty()) {
		res.push_back(s);
	}
	check[u] = true;
	for (auto x : A[u])if (!check[x])DFS(x,s+" "+to_string(x));
}
bool cmp(string a, string b) {
	int posa = a.find_last_of(" ");
	int posb = b.find_last_of(" ");
	return stoi(a.substr(posa, 10000)) < stoi(b.substr(posb, 10000));
}
int main() {
	faster();
	run() {
		reset();
		int n; cin >> n;
		if (n == 1) {
			cout << 1 << endl;
			continue;
		}
		FOR(i, 0, n - 1) {
			int u, v; cin >> u >> v;
			A[u].push_back(v);
		}
		res.clear();
		DFS(1, "1");
		sort(all(res),cmp);
		for (auto s : res) {
			cout << s << endl;
		}
		cout << endl;
	}
	return 0;
}



//_______________________T_O_A_N________________________//

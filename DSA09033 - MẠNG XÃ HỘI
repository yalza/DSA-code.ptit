#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<string>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#define ll long long
#define	p(x) pair<x,x> 
#define v(x) vector<x>
#define FORD(i,l,r) for(int i=l;i<r;i++)
#define FORE(i,l,r) for(int i=r-1;i>=0;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define cin(M) FORD(i,0,n)cin>>M[i];
#define reset  FORD(i, 0, 1001)A[i].clear(), check[i] = false;
#define all(M) M.begin(),M.end()
#define	ft first
#define sd second
using namespace std;

//____________________T_O_A_N_______________________//
int n, m;
bool check[1001];
bool ok[1001][1001];
v(int) A[1001];
set<p(int)> S;

bool DFS(int u) {
	for(auto x:A[u])
		for (auto y : A[x])
			if (S.count({ u,y }) == 0 && x!=u)	return false;
	return true;
}

string Internet() {
	FORD(i, 1, n + 1)if (!DFS(i))return "NO\n";
	return "YES\n";
}

int main() {
	int t; cin >> t;
	while (t--) {
		reset S.clear();
		cin >> n >> m;
		FORD(i, 0, m) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
			S.insert({ a,b });
			S.insert({ b,a });
		}
		cout << Internet();
	}
	return 0;
}

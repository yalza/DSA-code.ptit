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
#define reset FORD(i, 0, 1001)A[i].clear(), check[i] = false;
#define all(M) M.begin(),M.end()
#define	ft first
#define sd second
#define pb push_back
#define pf push_front
using namespace std;

//____________________T_O_A_N_______________________//

bool check[1001];
v(int) A[1001];

int Euler(int n) {
	int count = 0;
	FORD(i, 1, n + 1)if (A[i].size() % 2 == 1)count++;
	if (count == 2)return 1;
	if (count == 0)return 2;
	return 0;
}

int main() {
	int t; cin >> t;
	while (t--) {
		reset
		int n, m; cin >> n >> m;
		while (m--) {
			int a, b; cin >> a >> b;
			A[a].pb(b), A[b].pb(a);
		}
		cout << Euler(n) << endl;
	}
	return 0;
}

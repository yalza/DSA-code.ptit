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

int n;
map<int, int> dp[100000];
map<int, int>::iterator ite1, ite2;

void Add(int th, int x, int y) {
	ite1 = dp[th].lower_bound(x);
	ite2 = ite1;
	while (ite2 != dp[th].end() && ite2->second >= y)ite2++;
	dp[th].erase(ite1,ite2);
	dp[th].insert({ x,y });
}

bool check(int th,int x,int y) {
	ite1 = dp[th].lower_bound(x);
	if (ite1 == dp[th].begin())return false;
	ite1--;
	return ite1->second < y;
}


int main() {
	faster();
	cin >> n;
	Add(0, INT_MIN, INT_MIN);
	int res = 0;
	FOR(i, 0, n) {
		int x, y; cin >> x >> y;
		int l = 0, r = res;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (check(mid, x, y))l = mid + 1;
			else r = mid - 1;
		}
		if (res == l - 1)res = l;
		Add(l, x, y);
	}
	cout << res << endl;
}

//_______________________T_O_A_N________________________//

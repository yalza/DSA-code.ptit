#include<bits/stdc++.h>
#define mod              1000000007
#define ll               long long
#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define tree             node*
#define sz(a)            a.size()
#define f                first
#define s                second
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define FORX(i,l,r,x)    for(int i=l;i<r;i+=x)
#define FORD(i,l,r)      for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define reset()          FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t;cin.ignore(); while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;

//_______________________NGUYỄN_NGỌC_TOÀN_______________________//

char Load(ll k, string s, ll n) {
	if (k < sz(s))return s[k];
	if (k < n / 2)return Load(k, s, n / 2);
	if (k == n / 2)return Load(k - 1, s, n / 2);
	if (k > n / 2)return Load(k - n / 2 - 1, s, n / 2);
}


int main() {
	faster();
	run() {
		string s; cin >> s;
		ll k; cin >> k; k--;
		ll n = sz(s);
		while (n <= k)n *= 2;
		cout << Load(k, s, n) << endl;
	}
}

//__________________________B20DCPT173__________________________//

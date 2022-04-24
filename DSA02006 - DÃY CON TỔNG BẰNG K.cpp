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
#define run()            int t; cin >> t; while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;

//________________________NGUYỄN_NGỌC_TOÀN________________________//



int main() {
	faster();
	run() {
		int n, k; cin >> n >> k;
		v(int) M(n); cin(M, n);
		sort(all(M));
		v(string) S;
		FOR(i, 0, pow(2, n)) {
			auto s = bitset<20>(i).to_string().substr(20 - n, n);
			string res = "";
			int sum = 0;
			FOR(i, 0, n)if (s[i] == '1')res += to_string(M[i]) + " ", sum += M[i];
			if (sum == k) {
				res.pop_back();
				S.push_back("[" + res + "]");
			}
		}
		if (sz(S) == 0)cout << -1;
		else {
			reverse(all(S));
			for (auto s : S)cout << s << " ";
		}
		cout << endl;
	}
}

//__________________________B20DCPT173_____________________________//

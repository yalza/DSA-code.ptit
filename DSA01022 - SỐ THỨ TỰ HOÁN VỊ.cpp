#include<bits/stdc++.h>
#define mod				 1000000007
#define ll				 long long
#define	p(x)			 pair<x,x>
#define v(x)			 vector<x>
#define tree			 node*
#define sz(a)			 a.size();
#define f 				 first
#define s 				 second
#define pb(a)			 push_back(a)
#define pf(a)			 push_front(a)
#define FOR(i,l,r)		 for(int i=l;i<r;i++)
#define FORX(i,l,r,x)	 for(int i=l;i<r;i+=x)
#define FORD(i,l,r)		 for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)		 FOR(i,0,n)cin>>M[i]
#define cout(M,n)		 FOR(i,0,n)cout<<M[i]<<"\n"
#define rs(M,x)		     memset(M,x,sizeof(M))
#define reset()			 FOR(i, 0, 1000001)A[i].clear(),check[i]=false
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)
#define pq(x )			 priority_queue<x>
#define neg_pq(x)		 priority_queue<x, vector<x>, greater<x>>
#define all(M)			 M.begin(),M.end()
using namespace std;

//_______________________T_O_A_N________________________//



int main() {
	faster();
	run() {
		int n; cin >> n;
		string s, tmp;
		FOR(i, 0, n) {
			int a; cin >> a;
			s += to_string(a);
			tmp += to_string(i + 1);
		}
		int count = 1;
		do {
			if (tmp == s) {
				cout << count << endl;
				break;
			}
			count++;
		} while (next_permutation(all(tmp)));
	}
}


//_______________________T_O_A_N________________________//

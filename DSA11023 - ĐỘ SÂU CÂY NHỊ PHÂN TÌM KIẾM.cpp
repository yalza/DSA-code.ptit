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

struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};

void Add(tree& T, int x) {
	if (!T)T = new node(x);
	else {
		if (x < T->data)Add(T->pLeft, x);
		else Add(T->pRight, x);
	}
}
int res = 0;

void Load(tree T, int count) {
	if (!T->pLeft && !T->pRight)res = max(res, count);
	else {
		if (T->pLeft)Load(T->pLeft, count + 1);
		if (T->pRight)Load(T->pRight, count + 1);
	}

}
int main() {
	faster();
	run() {
		int n; cin >> n;
		tree T = NULL;
		while (n--) {
			int x; cin >> x;
			Add(T, x);
		}
		res = 0;
		Load(T, 0);
		cout << res << endl;
	}
	return 0;
}



//_______________________T_O_A_N________________________//

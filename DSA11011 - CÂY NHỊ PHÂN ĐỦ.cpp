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


void Add(tree&T,int u,int v,char c) {
	if (T == NULL) {
		T = new node(u);
		tree p = new node(v);
		if (c == 'L')T->pLeft = p;
		else T->pRight = p;
	}
	else {
		if (T->data == u) {
			tree p = new node(v);
			if (c == 'L')T->pLeft = p;
			else T->pRight = p;
		}
		else {
			if (T->pLeft != NULL)Add(T->pLeft, u, v, c);
			if (T->pRight != NULL)Add(T->pRight, u, v, c);
		}
	}
}

set<int> S;
int res = 1;
void Load(tree T,int count) {
	if (T->pLeft && !T->pRight || T->pRight && !T->pLeft)res = 0;
	else if (!T->pLeft && !T->pRight) {
		S.insert(count);
	}
	else {
		Load(T->pLeft, count + 1);
		Load(T->pRight, count + 1);
	}
}


int main(){
	faster();
	run() {
		S.clear();
		int n; cin >> n;
		tree T = NULL;
		FOR(i, 0, n) {
			int u, v; char c;
			cin >> u >> v >> c;
			Add(T, u, v, c);
		}
		res = 1;
		Load(T, 0);
		cout << res << endl;
	}
}



//_______________________T_O_A_N________________________//

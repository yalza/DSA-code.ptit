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

int res;


struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};

void addNODE(int n, tree& root)
{
	map<int, tree>m;
	for (int i = 0; i < n; i++)
	{
		int u, v;
		char c;
		cin >> u >> v >> c;
		if (m.find(u) == m.end())
		{
			(root) = new node(u);
			if (c == 'L')
			{
				(root)->pLeft = new node(v);
				m[v] = (root)->pLeft;
			}
			else
			{
				(root)->pRight = new node(v);
				m[v] = (root)->pRight;
			}
			m[u] = (root);
		}
		else
		{
			if (c == 'L')
			{
				m[u]->pLeft = new node(v);
				m[v] = m[u]->pLeft;
			}
			else
			{
				m[u]->pRight = new node(v);
				m[v] = m[u]->pRight;
			}
		}
	}
}

bool isLeaf(tree T) {
	if (!T)return false;
	if (!T->pLeft && !T->pRight)return true;
	return false;
}
int Sum(tree T) {
	if (!T)return 0;
	int res = 0;
	if (isLeaf(T->pRight))res = T->pRight->data;
	if (T->pRight)res += Sum(T->pRight);
	if (T->pLeft && !isLeaf(T->pLeft))res += Sum(T->pLeft);
	return res;
}

int main() {
	faster();
	run() {
		int n; cin >> n;
		tree T = NULL;
		addNODE(n, T);
		cout << Sum(T) << endl;
	}
}



//_______________________T_O_A_N________________________//

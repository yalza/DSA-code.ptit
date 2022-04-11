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
#define cin(M,n) FORD(i,0,n)cin>>M[i];
#define reset  FORD(i, 0, 1001)A[i].clear(), check[i] = false;
#define all(M) M.begin(),M.end()
#define	ft first
#define sd second
using namespace std;

//_______________________T_O_A_N________________________//


int n, m, k, M[1000];
bool check[1001];
v(int) A[1001];

void DFS(int u) {
	check[u] = true;
	for (auto x : A[u])if (!check[x])DFS(x);
}

int main() {
	cin >> k >> n >> m;
	cin(M, k);
	FORD(i, 0, m) {
		int a, b; cin >> a >> b;
		A[a].push_back(b);
	}
	int count = 0;
	FORD(i, 1, n + 1) {
		memset(check, false, sizeof(check));
		DFS(i);
		int x = 0;
		FORD(j, 0, k)if (check[M[j]])x++;
		if (x == k)count++;
	}
	cout << count << endl;
	return 0;
}

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
#define pb push_back
#define pf push_front
using namespace std;

//____________________T_O_A_N_______________________//
int n, m;
bool check[1001];
bool h;
bool ok[1001][1001];
v(int) A[1001];
bool Euler() {
	FORD(i, 1, n + 1) {
		int x = 0, y = 0;
		FORD(j, 1, n + 1) {
			if (ok[i][j])x++;
			if (ok[j][i])y++;
		}
		if (x != y)return 0;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		reset memset(ok,0,sizeof(ok));
		cin >> n >> m;
		FORD(i,0,m) {
			int a, b; cin >> a >> b;
			ok[a][b] = 1;
		}
		cout << Euler() << endl;
	}
	return 0;
}

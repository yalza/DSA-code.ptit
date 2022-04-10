#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<climits>
#include<set>
#include<stack>
#include<queue>
#define mod 1000000007
#define ll long long
#define	p(x) pair<x,x> 
#define v(x) vector<x>
#define FORD(i,l,r) for(int i=l;i<r;i++)
#define FORE(i,l,r) for(int i=l-1;i>=r;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define sz size();
#define all(M) M.begin(),M.end()
#define	f first
#define s second
#define pb push_back
#define pf push_front
using namespace std;

//______________________________T_O_A_N______________________________//
int n, m;
char M[100][100];
bool check[100][100];

int dx[8] = { 1,1,1,0,-1,-1,-1,0 };
int dy[8] = { 1,0,-1,-1,-1,0,1,1 };

void DFS(int x, int y) {
	check[x][y] = true;
	FORD(i, 0, 8) {
		int a = x + dx[i];
		int b = y + dy[i];
		if (correct(a, b, n, m) && !check[a][b] && M[a][b] == 'W')DFS(a, b);
	}
}

int main() {
	cin >> n >> m;
	FORD(i, 0, n)FORD(j, 0, m)cin >> M[i][j], check[i][j] = false;
	int res = 0;
	FORD(i, 0, n)FORD(j, 0, m)if (!check[i][j] && M[i][j] == 'W')res++, DFS(i, j);
	cout << res << endl;
}

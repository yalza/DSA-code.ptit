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
#define correct(x,y,n,m) (1<=(x)&&(x)<(n)&&1<=(y)&&(y)<(m))
#define sz size();
#define all(M) M.begin(),M.end()
#define	f first
#define s second
#define pb push_back
#define pf push_font
using namespace std;

//______________________________T_O_A_N______________________________//

int dx[8] = {2,2,1,1,-1,-2,-2,-1};
int dy[8] = {1,-1,-2,2,-2,-1,1,2};
int BFS(p(int) a,p(int) b) {
	queue<pair<p(int),int>> Q;
	set<p(int)> S;
	Q.push({ a,0 });
	S.insert(a);
	while (Q.size()) {
		p(int) tmp = Q.front().f;
		int count = Q.front().s;
		Q.pop();
		if (tmp == b)return count;
		FORD(i, 0, 8) {
			int x = tmp.f + dx[i];
			int y = tmp.s + dy[i];
			if (correct(x, y, 9, 9)&&S.count({x,y})==0) {
				Q.push({ { x,y },count + 1 });
				S.insert({ x,y });
			}
		}
	}
	return -1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		p(int) u = { a[0] - 'a' + 1,a[1] - '0' }, v = { b[0] - 'a' + 1,b[1] - '0' };
		cout << BFS(u, v) << endl;
	}
}

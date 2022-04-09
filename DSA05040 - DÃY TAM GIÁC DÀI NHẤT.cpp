#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<climits>
#include<set>
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
#define pf push_font
using namespace std;

//____________________T_O_A_N_______________________//



int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		FORD(i, 0, n)cin >> M[i];
		v(int) dpl(n, 1), dpr(n, 1);
		FORD(i, 1, n)if (M[i] > M[i - 1])dpl[i] += dpl[i - 1];
		FORE(i, n - 2, 0)if (M[i] > M[i + 1])dpr[i] += dpr[i + 1];
		int res = 0;
		FORD(i, 0, n)res = max(res, dpl[i] + dpr[i] - 1);
		cout << res << endl;
	}
}

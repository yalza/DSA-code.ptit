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

string Load(v(ll) M, ll n, ll k) {
	if (k == 0)return "NO";
	multiset<ll> S;
	FORD(i, 1, n + 1)S.insert(M[i]);
	FORD(i, 0, n + 1)if (S.count(M[i] + k) != 0)return "YES";
	return "NO";
}

int main() {
	int t; cin >> t;
	while (t--) {
		ll n, k; cin >> n >> k;
		v(ll) M(n + 1, 0);
		FORD(i, 1, n + 1)cin >> M[i];
		FORD(i, 1, n + 1)M[i] += M[i - 1];
		cout << Load(M, n, k) << endl;
	}
}

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
#define FORE(i,l,r) for(int i=r-1;i>=l;i--)
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
	int n;
	string s;
	cin >> n >> s;
	ll res = 0, tmp = 1;
	FORD(i, 1, n)
		if (s[i] == s[i - 1])tmp++, res += i - (tmp<=i);
		else res += i - tmp, tmp = 1;
	cout << res << endl;
	return 0;
}

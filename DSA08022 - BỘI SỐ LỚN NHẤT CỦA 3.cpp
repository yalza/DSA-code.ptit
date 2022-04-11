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
#define sz(M) M.size();
#define all(M) M.begin(),M.end()
#define	ft first
#define sd second
#define pb push_back
#define pf push_front
using namespace std;

//____________________T_O_A_N_______________________//

bool check[10000];

int main() {
	int t; cin >> t;
	while (t--) {
		int n, M[100000];
		cin >> n; cin(M);
		int N[10] = { 0 };
		int sum = 0;
		FORD(i, 0, n)N[M[i]]++, sum += M[i];
		bool check = false;
		if (sum % 3 == 1) {
			if (N[1] > 0)N[1]--, check = true;
			else if (N[4] > 0)N[4]--, check = true;
			else if (N[7] > 0)N[7]--, check = true;
		}
		else if (sum % 3 == 2) {
			if (N[2] > 0)N[2]--, check = true;
			else if (N[5] > 0)N[5]--, check = true;
			else if (N[8] > 0)N[8]--, check = true;
		}
		else check = true;
		if (!check) {
			cout << -1 << endl; continue;
		}
		int k = 10, ok = 1;
		while (k--)while (N[k]--)cout << k, ok = 0;
		if (ok)cout << -1;
		cout << endl;
	}
	return 0;
}

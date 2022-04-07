#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#define ll long long
#define	p(x) pair<x,x> 
#define v(x) vector<x>
#define FORD(i,l,r) for(int i=l;i<r;i++)
#define FORE(i,l,r) for(int i=r-1;i>=0;i--)
#define correct(x,y,n,m) (0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m))
#define sz size();
#define all(M) M.begin(),M.end()
#define	f first
#define s second
#define pb push_back
#define pf push_font
using namespace std;

//____________________T_O_A_N_______________________//


struct X {
	int value, weight;
	float x;
};

bool cmp(X a, X b) {
	return a.x > b.x;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		v(X) M(n);
		FORD(i, 0, n)cin >> M[i].weight >> M[i].value, M[i].x = (float)M[i].weight / M[i].value;
		sort(all(M), cmp);
		int sum_value = 0;
		float sum_weight = 0;
		int c = 0;
		FORD(i, 0, n) {
			if (sum_value <= k) {
				sum_value += M[i].value;
				sum_weight += M[i].weight;
				c = i;
			}
		}
		if (sum_value > k)sum_weight -= (float)(sum_value - k) * M[c].x;
		cout << setprecision(2) << fixed << sum_weight << endl;
	}
}

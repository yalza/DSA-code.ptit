#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string.h>
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
		int M[100000]; cin(M);
		stack<int> S;
		int i = 0, res = 0;
		while (i < n) {
			if (S.empty() || M[i] > M[S.top()])S.push(i), i++;
			else {
				int tmp = S.top();
				S.pop();
				if (S.empty()) {
					if (M[tmp] <= i)res = max(res, M[tmp]);
				}
				else if (M[tmp] <= (i - S.top() - 1))res = max(res, M[tmp]);
			}
		}
		while (S.size()) {
			int tmp = S.top();
			S.pop();
			if (S.empty()) {
				if (M[tmp] <= i)res = max(res, M[tmp]);
			}
			else if (M[tmp] <= (i - S.top() - 1))res = max(res, M[tmp]);
		}
		cout << res << endl;
	}
	return 0;
}

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


int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int count = 0;
		while (true) {
			int pos = s.find("()");
			if (pos == -1)break;
			else {
				count += 2;
				s.erase(pos, 2);
			}
		}
		cout << count << endl;
	}
	return 0;
}

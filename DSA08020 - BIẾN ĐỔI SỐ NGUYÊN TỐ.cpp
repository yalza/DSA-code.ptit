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

int BFS(string s, string t) {
	queue<pair<string,int>> Q;
	Q.push({ s,0 });
	set<string> S;
	S.insert(s);
	while (Q.size()) {
		pair<string, int> tmp = Q.front(); Q.pop();
		if (tmp.ft == t)return tmp.sd;
		string f = tmp.ft;
		FORD(i, 0, 4) {
			int x = (i == 0) ? 1 : 0;
			FORD(j, x, 10) {
				f[i] = j + '0';
				if (S.count(f) == 0 && !check[stoi(f)])S.insert(f), Q.push({ f,tmp.sd + 1 });
			}
			f = tmp.ft;
		}
	}
	return -1;
}


int main() {
	int t; cin >> t;
	FORD(i, 2, 10000)if (!check[i])for (int j = i * 2; j < 10000; j += i)check[j] = true;
	while (t--) {
		string s, t; cin >> s >> t;
		cout << BFS(s, t) << endl;
	}
	return 0;
}

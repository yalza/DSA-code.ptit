#include<iostream>
#include<climits>
#include<string.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long ll;
int X[] = {-1,-1,-1,0,0,1,1,1};
int Y[] = {-1,0,1,-1,1,-1,0,1};
int k, m, n;
bool check[100][100];
string N[100];
vector<string> S;
char M[100][100];
void Try(int x, int y,string s) {
	for (int i = 0; i < k; i++)if (N[i] == s)S.push_back(s);
	for (int i = 0; i < 8; i++) {
		int a =x + X[i];
		int b =y + Y[i];
		if (a >= 0 && a < m && b >= 0 && b < n && !check[a][b]) {
			check[a][b] = true;
			Try(a, b, s + M[a][b]);
			check[a][b] = false;
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		S.clear();
		cin >> k >> m >> n;
		for (int i = 0; i < k; i++) cin >> N[i];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				memset(check, false, sizeof(check));
				check[i][j] = true;
				string s = "";
				Try(i, j, s+M[i][j]);
			}
		}
		if (S.size() == 0)cout << -1;
		else
		for (auto s:S) {
			cout << s << " ";
		}
		cout << endl;
	}
}

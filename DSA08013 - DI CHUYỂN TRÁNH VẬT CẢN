#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<set>
using namespace std;
int n;
char M[100][100];
bool check[100][100];
struct p {
	int first, second, cnt;
};
int BFS(p s, p e) {
	s.cnt = 0;
	queue<p> X;
	X.push(s);
	while (X.size()) {
		p f = X.front();
		X.pop();
		int x = f.first;
		int y = f.second;
	
		if (x == e.first && y == e.second)return f.cnt;
		for (int i = x + 1; i < n; i++) {
			if (M[i][y] != 'X' && !check[i][y]) {
				X.push({ i,y,f.cnt + 1 });
				check[i][y] = true;
			}
			else break;
		}
		for (int i = x - 1; i >= 0; i--) {
			if (M[i][y] != 'X' && !check[i][y]) {
				X.push({ i,y,f.cnt + 1 });
				check[i][y] = true;
			}
			else break;
		}
		for (int i = y + 1; i < n; i++) {
			if (M[x][i] != 'X' && !check[x][i]) {
				X.push({ x,i,f.cnt + 1 });
				check[x][i] = true;
			}
			else break;
		}
		for (int i = y - 1; i >= 0; i--) {
			if (M[x][i] != 'X' && !check[x][i]) {
				X.push({ x,i,f.cnt + 1 });
				check[x][i] = true;
			}
			else break;
		}
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		memset(check, false, sizeof(check));
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> M[i][j];
		p s, e;
		cin >> s.first >> s.second >> e.first >> e.second;
		cout << BFS(s, e) << endl;
	
	}
}

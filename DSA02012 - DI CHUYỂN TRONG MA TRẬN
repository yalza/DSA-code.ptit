#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll;

int count(int m,int n) {
	if (m == 1 || n == 1)return 1;
	return count(m - 1, n) + count(m, n - 1);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int M[101][101];
		for (int i = 0; i < m; i++)for (int j = 0; j < n; j++)cin >> M[i][j];
		cout << count(m, n) << endl;
	}

}

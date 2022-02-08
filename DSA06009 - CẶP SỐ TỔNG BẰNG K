#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				if (M[i] + M[j] == k)cnt++;
		cout << cnt << endl;
	}
}

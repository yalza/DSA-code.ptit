#include<iostream>
using namespace std;


int sum(int* M, int n) {
	int dp1[1000], dp2[1000];
	int res = 0;
	for (int i = 0; i < n; i++) {
		dp1[i] = M[i];
		int maxx = 0;
		for (int j = 0; j < i; j++)
			if(M[j]<M[i])
			maxx = max(maxx, dp1[j]);
		dp1[i] += maxx;
		res = max(res, dp1[i]);
	}
	
	return res;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1001];
		for (int i = 0; i < n; i++)cin >> M[i];
		cout << sum(M, n) << endl;
	}
}

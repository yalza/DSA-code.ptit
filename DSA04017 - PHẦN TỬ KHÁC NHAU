#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<long long> M(n),N(n-1);
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int i = 0; i < n - 1; i++) cin >> N[i];
		for(int i=0;i<n;i++)
			if (M[i]!=N[i]) {
				cout << i + 1;
				break;
			}
		cout << endl;
	}
} 

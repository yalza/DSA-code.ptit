#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[1000];
		for (int i = 0; i < n; i++)cin >> M[i];
		int res = INT_MAX;
		int minnn=INT_MAX;
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if (abs(M[i] + M[j]) < minnn) {
					minnn = abs(M[i] + M[j]);
					res = M[i] + M[j];
				}
				
		cout << res << endl;
	}
}

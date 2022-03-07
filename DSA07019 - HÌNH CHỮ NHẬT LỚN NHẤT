#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<set>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		stack<int> X;
		int i = 0;
		ll res = 0;
		while (i < n) {
			if (X.size() == 0 || M[i] > M[X.top()]) {
				X.push(i); i++;
			}
			else {
				int x = X.top();
				X.pop();
				if (X.size() == 0)res = max(res, (ll)i * M[x]);
				else res = max(res, (ll)M[x] * (i - X.top() - 1));
			}
		}
		while (X.size()) {
			int x = X.top();
			X.pop();
			if (X.size() == 0)res = max(res,(ll)i * M[x]);
			else res = max(res, (ll)M[x] * (i - X.top() - 1));
		}
		cout << res << endl;
	}
	
}

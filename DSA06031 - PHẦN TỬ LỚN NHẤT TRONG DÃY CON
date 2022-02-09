#include<iostream>
#include<set>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int M[100000];
		for (int i = 0; i < n; i++)cin >> M[i];
		multiset<int> X;
		for (int i = 0; i < k; i++)X.insert(M[i]);
		cout << *X.rbegin() << " ";
		for (int i = k; i < n; i++) {
			X.erase(X.find(M[i - k]));
			X.insert(M[i]);
			cout << *X.rbegin() << " ";
		}
		cout << endl;
	}
}

#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int k; cin >> k;
		string s; cin >> s;
		vector<int> M(100000, 0);
		for (auto x : s)M[x]++;
		multiset<int> X;
		for (int i = 'A'; i <= 'Z'; i++)if (M[i] > 0)X.insert(M[i]);
		while (k--) {
			int a = *X.rbegin();
			X.erase(X.find(a));
			X.insert(a - 1);
		}
		long long res = 0;
		for (auto x : X)res += (long long)x * x;
		cout << res << endl;
	}
} 

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int m, n, p; cin >> m >> n >> p;
		vector<int> X(m), Y,Z;
		multiset<int> A, B;
		for (int i = 0; i < m; i++)cin >> X[i];
		while (n--) {
			int a; cin >> a;
			A.insert(a);
		}
		while (p--) {
			int a; cin >> a;
			B.insert(a);
		}
		for (int a : X) {
			if (A.count(a) != 0) {
				Y.push_back(a);
				A.erase(A.find(a));
			}
		}
		for (int a : Y) {
			if (B.count(a) != 0) {
				Z.push_back(a);
				B.erase(B.find(a));
			}
		}
		if (Z.size() == 0)cout << "NO";
		else
			for (int a : Z)cout << a << " ";
		cout << endl;
	}
}

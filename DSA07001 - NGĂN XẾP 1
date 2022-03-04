#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	string s;
	int n;
	stack<int>nx;
	while (cin >> s) {
		if (s == "push") {
			cin >> n;
			nx.push(n);
		}
		if (s == "pop") {
			nx.pop();
		}
		if (s == "show") {
			vector<int>a;
			if (nx.empty()) {
				cout << "empty" << endl;
				continue;
			}
			while (!nx.empty()) {
				a.push_back(nx.top());
				nx.pop();
			}
			reverse(a.begin(), a.end());
			for (int i = 0; i < a.size(); i++) {
				cout << a[i] << " ";
				nx.push(a[i]);
			}
			cout << endl;
		}
	}
}

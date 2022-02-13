#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<queue>
using namespace std;
typedef pair<int, int> p;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		queue<p> X; X.push({n,0});
		while (X.size()) {
			p b = X.front();
			X.pop();
			if (b.first == 1) {
				cout << b.second << endl;
				break;
			}
			if (b.first % 2 == 0)X.push({ b.first / 2,b.second + 1 });
			if (b.first % 3 == 0)X.push({ b.first / 3,b.second + 1 });
			if (b.first > 1)X.push({ b.first - 1,b.second + 1 });
		}
	}
}

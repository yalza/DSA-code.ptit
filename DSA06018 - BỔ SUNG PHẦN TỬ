#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<climits>
typedef long long ll;
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x;
		set<int> S;
		while (n--) {
			cin >> x; S.insert(x);
		}
		int cnt = 0;
		for (int i = *S.begin(); i <= *S.rbegin(); i++)
			if (S.count(i) == 0)cnt++;
		cout << cnt << endl;
	}
}

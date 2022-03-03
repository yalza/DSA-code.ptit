#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
struct job {
	int a, b, c;
};
bool cmp(job A, job B) {
	return A.c > B.c;
	
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<job> M(n);
		bool ok[100000] = { false };
		for (int i = 0; i < n; i++)cin >> M[i].a >> M[i].b >> M[i].c;
		sort(M.begin(), M.end(), cmp);
		long long res = 0;
		int dem = 0;
		for (int i = 0; i < n; i++) {
			for (int j = M[i].b; j >0; j--) {
				if (!ok[j]) {
					res += M[i].c;
					ok[j] = true;
					dem++;
					break;
				}
			}
		}
		cout << dem<<" "<<res << endl;
	}
}

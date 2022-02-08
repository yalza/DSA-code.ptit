#include<iostream>
#include<algorithm>
using namespace std;
struct xxx {
	int a, c;
};
bool cmp(xxx A, xxx B) {
	if (A.c > B.c)return true;
	if (A.c == B.c && A.a < B.a)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		xxx M[10000];
		for (int i = 0; i < n; i++) {
			cin >> M[i].a;
			M[i].c = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (M[i].a == M[j].a)M[i].c++;
			}
		}
		sort(M, M + n, cmp);
		for (int i = 0; i < n; i++)cout << M[i].a << " ";
		cout << endl;
	}
}

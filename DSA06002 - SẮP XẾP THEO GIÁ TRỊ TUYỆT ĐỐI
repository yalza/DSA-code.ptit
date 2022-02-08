#include<iostream>
#include<algorithm>
using namespace std;
struct xxx {
	int a, b, c;
};
bool cmp(xxx A, xxx B) {
	if (A.c < B.c)return true;
	if (A.c == B.c&&A.b<B.b)return true;
	return false;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		xxx M[100000];
		for (int i = 0; i < n; i++) {
			cin >> M[i].a;
			M[i].b = i;
			M[i].c = abs(k - M[i].a);
		}
		sort(M, M + n, cmp);
		for (int i = 0; i < n; i++)cout << M[i].a << " ";
		cout << endl;
	}
}

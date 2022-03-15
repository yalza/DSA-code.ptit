#include<iostream>
using namespace std;
int seach(int* M, int n, int x) {
	for (int i = 0; i < n; i++)
		if (M[i] == x)return i;
}
void Duyet(int*M,int n,int*N) {
	int x = seach(M, n, N[0]);
	if (x != 0)	Duyet(M, x, N + 1);
	if (x != n - 1)Duyet(M + x + 1, n - x - 1, N + x + 1);
	cout << N[0] << " ";
}

int main() {
	int t; cin >> t;
	while (t--) {
		int M[1000], N[1000];
		int n; cin >> n;
		for (int i = 0; i < n; i++)cin >> M[i];
		for (int j = 0; j < n; j++)cin >> N[j];
		Duyet(M, n, N);
		cout << endl;
	}
}

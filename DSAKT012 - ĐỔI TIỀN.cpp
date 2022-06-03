#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
ll cnt = 0, sum = 0;
int n, k;
int M[100];
void Try(int j) {
	for (int i = 1; i >= 0; i--) {
		sum += M[j]*i;
		cnt += i;
		if (sum == k) {
			cout << cnt << endl;
			exit(0);
		}
		if (sum < k && j < n - 1)Try(j + 1);
		sum -= M[j]*i;
		cnt -= i;
	}
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> M[i];
	sort(M, M + n, greater<>());
	Try(0);
	cout << -1 << endl;
}

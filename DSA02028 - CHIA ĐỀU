#include<iostream>
using namespace std;
typedef long long ll;
int res = 0;
int n, k;
int M[10000];
void Try(int i, int s,int x,int cnt) {
	if (cnt == k&&i==n){res++;
	return;
	}
	for (int j = i; j < n; j++) {
		s += M[j];
		if (s == x)Try(j+1, 0, x, cnt+1);
	}
}
int main() {
	cin >> n >> k;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> M[i]; sum += M[i];
	}
	if (sum % k != 0) {
		cout << 0 << endl;
	}
	else {
		Try(0, 0, sum / k, 0);
		cout << res << endl;
	}
}

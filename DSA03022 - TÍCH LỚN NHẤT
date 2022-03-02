#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
typedef long long int ll;
int main() {
	
	int n; cin >> n;
	int M[100000];
	for (int i = 0; i < n; i++)cin >> M[i];
	sort(M, M + n,greater<>());
	int a = M[n - 1] * M[n - 2];
	int b = M[0] * M[1];
	int c = b * M[2];
	int d = M[0] * a;
	cout << max(a, max(b, max(c, d))) << endl;
	
}

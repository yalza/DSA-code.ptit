#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int cb(int sum, int n, int M[]) {
	int xum = 0;
	for (int i = 0; i < n; i++) {
		xum += M[i];
		if (xum == sum - xum + M[i])return i+1;
	}
	return -1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			sum += M[i];
		}
		cout << cb(sum, n, M) << endl;
	}
}

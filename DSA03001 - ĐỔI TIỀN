#include<iostream>
#include<algorithm>
#include<string.h>
#include<set>
#include<vector>
using namespace std;
int main() {
	int M[] = { 1000,500,200,100,50,20,10,5,2,1 };
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int count = 0;
		for (int i = 0; i < 10; i++) {
			while (n >= M[i]) {
				count++;
				n -= M[i];
			}
		}
		cout << count << endl;
	}
}

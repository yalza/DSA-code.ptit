#include<iostream>
#include<algorithm>
using namespace std;

void thn(int n, char a, char b, char c) {
	if (n == 1)cout << a << " -> " << c<<endl;
	else {
		thn((n - 1), a, c, b);
		cout << a << " -> " << c << endl;
		thn(n - 1, b, a, c);
	}
}
int main() {
	int n; cin >> n;
	thn(n, 'A', 'B', 'C');
}

#include<iostream>
using namespace std;

int main() {
	int n, s; cin >> n >> s;
	int x = s;
	int y = s;
	int M[100] = { 0 }, N[100] = { 0 };
	M[0] = 1;
	s--;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s >= 9) {
			M[i] = 9;
			s -= 9;
		}
		else {
			if (i == 0)
				M[i] = s + 1;
			else
				M[i] = s; s = 0;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (x >= 9) {
			N[i] = 9;
			x -= 9;
		}
		else {
			N[i] = x; x = 0;
			break;
		}
	}
	if (y == 0 || y > 9 * n)cout << -1 << " " << -1 << endl;
	else {
		for (int i = 0; i < n; i++)cout << M[i];
		cout << " ";
		for (int i = 0; i < n; i++)cout << N[i];
		cout << endl;
	}
}

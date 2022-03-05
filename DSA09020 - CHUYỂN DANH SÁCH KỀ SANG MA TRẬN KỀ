#include<iostream>
#include<algorithm>
#include<string.h>
#include<sstream>
using namespace std;

int main() {
	
	int n; cin >> n;
	cin.ignore();
	int M[1001][1001];
	memset(M, 0, sizeof(M));
	for (int i = 1; i <= n; i++) {
		string s; getline(cin, s);
		string a;
		stringstream x(s);
		while (x >> a) {
			M[i][stoi(a)] = 1;
			M[stoi(a)][i] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)cout << M[i][j] << " ";
		cout << endl;
	}
	
}

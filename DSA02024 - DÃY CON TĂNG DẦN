#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int n;
bool ok = false;
vector<string> S;
bool ktra(vector<int> M, int n,int*N) {
	int cnt=0;
	vector<int> C;
	for (int i = 0; i < n; i++)
		if (N[i] == 1)C.push_back(M[i]);
	if (C.size() < 2)return false;
	for (int i = 1; i < C.size(); i++)
		if (C[i] <= C[i - 1])return false;
	return true;
}
void sinh(int*M,int n) {
	int a = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (M[i] == 0) {
			a = 1;
			M[i] = 1;
			for (int j = i + 1; j < n; j++)M[j] = 0;
			break;
		}
	}
	if (a == 0)ok = true;
}
int main() {
	cin >> n;
	vector<int> M(n);
	for (int i = 0; i < n; i++)cin >> M[i];
	int N[100] = { 0 };
	while (!ok) {
		if (ktra(M, n,N)) {
			string s="";
			for (int i = 0; i < n; i++) {
				if (N[i] == 1)s += to_string(M[i]) + " ";
			}
			S.push_back(s);
		}
		sinh(N, n);
	}
	sort(S.begin(), S.end());
	for (string s : S)cout << s << endl;
}

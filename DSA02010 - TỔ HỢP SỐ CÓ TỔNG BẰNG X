#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> S;
bool ok;
void Try(int*M,int n,int k,int sum,string s,int j) {	
	for (int i = j; i < n; i++) {
		if (sum == k) {
			ok = true;
			s.pop_back();
			S.push_back(s);
			return;
		}
		else if (sum < k)Try(M, n, k, sum + M[i], s + to_string(M[i])+" ", i);
		else return;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		ok = false;
		S.clear();
		int n, k; cin >> n >> k;
		int M[20];
		for (int i = 0; i < n; i++)cin >> M[i];
		Try(M, n, k, 0, "", 0);
		if (ok == false)cout << -1;
		else for (string s : S)cout << "[" << s << "]";
		cout << endl;
	}

}

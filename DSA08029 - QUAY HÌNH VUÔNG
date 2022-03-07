#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<set>
using namespace std;
typedef long long ll;
bool ktra(vector<int> A, vector<int> B) {
	for (int i = 0; i < 6; i++)if (A[i] != B[i])return false;
	return true;
}
vector<int> quay1(vector<int> A) {
	int tmp = A[0];
	A[0] = A[3]; 
	A[3] = A[4]; 
	A[4] = A[1]; 
	A[1] = tmp;
	return A;
}
vector<int> quay2(vector<int> A) {
	int tmp = A[1];
	A[1] = A[4];
	A[4] = A[5];
	A[5] = A[2];
	A[2] = tmp;
	return A;
}
int main() {
	int t; cin >> t;
	while (t--) {
		queue<pair<vector<int>, int>> W;
		set<vector<int>> S;
		vector<int> A(6), B(6);
		for (int i = 0; i < 6; i++)cin >> A[i];
		for (int j = 0; j < 6; j++)cin >> B[j];
		W.push({ A,0 });
		S.insert(A);
		while (W.size()) {
			vector<int> M = W.front().first;
			int cnt = W.front().second;
			W.pop();
			if (ktra(M, B)) {
				cout << cnt << endl; break;
			}
			vector<int> N = M;
			vector<int> X = quay1(M), Y = quay2(N);
			if (S.count(X) == 0) {
				W.push({ X,cnt + 1 });
				S.insert(X);
			}
			if (S.count(Y) == 0) {
				W.push({ Y,cnt + 1 });
				S.insert(Y);
			}
		}
	}
	
}

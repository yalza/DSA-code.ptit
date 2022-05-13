#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<map>
using namespace std;
typedef long long ll;
bool ktra(vector<int> A, vector<int> B) {
	for (int i = 0; i < 10; i++)if (A[i] != B[i])return false;
	return true;
}
vector<int> quay1(vector<int> A) {
	int tmp = A[0];
	A[0] = A[3];
	A[3] = A[7];
	A[7] = A[8];
	A[8] = A[5];
	A[5] = A[1];
	A[1] = tmp;
	return A;
}
vector<int> quay2(vector<int> A) {
	int tmp = A[1];
	A[1] = A[4];
	A[4] = A[8];
	A[8] = A[9];
	A[9] = A[6];
	A[6] = A[2];
	A[2] = tmp;
	return A;
}
vector<int> quay3(vector<int> A) {
	int tmp = A[1];
	A[1] = A[5];
	A[5] = A[8];
	A[8] = A[7];
	A[7] = A[3];
	A[3] = A[0];
	A[0] = tmp;
	return A;
}
vector<int> quay4(vector<int> A) {
	int tmp = A[1];
	A[1] = A[2];
	A[2] = A[6];
	A[6] = A[9];
	A[9] = A[8];
	A[8] = A[4];
	A[4] = tmp;
	return A;
}
int main() {
	int t; cin >> t;
	while (t--) {
		queue<pair<vector<int>, int>> W1,W2;
		map<vector<int>,int> S;
		vector<int> A(10), B(10);
		B = { 1,2,3,8,0,0,4,7,6,5 };
		for (int j = 0; j < 10; j++)cin >> A[j];
		W1.push({ A,0 });
		W2.push({ B,0 });
		int res = 10e9;
		while (W1.size()) {
			pair<vector<int>, int> a, b, c,d;
			a = W1.front();
			d = a;
			W1.pop();
			b.first = quay1(a.first);
			b.second = a.second + 1;
			if (S[b.first] == 0)S[b.first] = b.second ;
			W1.push(b);
			c.first = quay2(d.first);
			c.second = d.second + 1;
			if (S[c.first] == 0)S[c.first] = c.second ;
			W1.push(c);
			if (b.second >= 15)break;
		}
		while (W2.size()) {
			pair<vector<int>, int> a, b, c, d;
			a = W2.front();
			d = a;
			W2.pop();
			b.first = quay3(a.first);
			b.second = a.second + 1;
			if (S[a.first] > 0)res = min(res, S[a.first] + a.second);
			W2.push(b);
			c.first = quay4(d.first);
			c.second = d.second + 1;
			W2.push(c);
			if (b.second >= 15)break;
		}
		cout << res << endl;
	}

}

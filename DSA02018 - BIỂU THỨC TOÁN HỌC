#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<queue>
using namespace std;

vector<vector<int>> A, B;
vector<int> a = {0,1,2,3,4};
vector<int> b(4,0);
void Try(int i) {
	for (int j = 0; j <= 2; j++) {
		b[i] = j;
		if (i == 3)B.push_back(b);
		else Try(i + 1);
	}
}
string Ktra() {
	int M[5];
	for (int i = 0; i < 5; i++)cin >> M[i];
	for (vector<int> X : A) {
		for (vector<int> Y : B) {
			int sum = M[X[0]];
			for (int i = 0; i < Y.size(); i++) {
				if (Y[i] == 0)sum += M[X[i+1]];
				else if (Y[i] == 1)sum -= M[X[i+1]];
				else sum *= M[X[i+1]];
			}
			if (sum == 23)return "YES\n";
		}
	}
	return "NO\n";
}
int main() {
	Try(0);
	do
	{
		A.push_back(a);
	} while (next_permutation(a.begin(),a.end()));
	int t; cin >> t;
	while (t--) {
		cout << Ktra() << endl;
	}
}

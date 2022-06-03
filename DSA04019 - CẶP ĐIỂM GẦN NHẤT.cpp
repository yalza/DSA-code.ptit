#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<cfloat>
using namespace std;
typedef long long ll;
typedef pair<double, double> p;
typedef vector<p> v;
double Distance(p A, p B) {
	return double(sqrt((A.first - B.first) * (A.first - B.first) + (A.second - B.second) * (A.second - B.second)));
}
bool cmp(p A, p B) {
	return A.second > B.second;
}
double _Min1(p*M,int n) {
	double a = FLT_MAX;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			a = min(a, Distance(M[i], M[j]));
	return a;
}
double _Min2(v X,double minx) {
	double a = minx;
	sort(X.begin(), X.end());
	for (int i = 0; i < X.size(); i++)
		for (int j = i + 1; j < X.size()&&(X[j].second-X[i].second)<a; j++)
			a = min(a, Distance(X[i], X[j]));
	return a;
}
double Load(p*M,int n) {
	if (n<=3)return _Min1(M,n);
	int mid = n / 2;
	double minx = min(Load(M, mid), Load(M + mid, n - mid));
	v X;
	for (int i = 0; i < n; i++)
		if (abs(M[i].first - M[mid].first) < minx)
			X.push_back(M[i]);
	return min(minx, _Min2(X,minx));
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		p M[100000];
		for (int i = 0; i < n; i++)cin >> M[i].first >> M[i].second;
		sort(M, M+n);
		if(n>1)
		cout << setprecision(6) << fixed << Load(M, n) << endl;
		else cout<<endl;
	}
}

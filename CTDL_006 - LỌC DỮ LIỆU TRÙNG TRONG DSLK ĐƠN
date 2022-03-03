#include <iostream>
#include<unordered_set>
using namespace std;


int main()
{
	int n; cin >> n;
	int M[10000];
	bool check[10000] = { false };
	unordered_set<int> X;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
	}
	for(int i=0;i<n;i++)
		if (!check[M[i]]) {
			cout << M[i] << " ";
			check[M[i]] = true;
		}
}

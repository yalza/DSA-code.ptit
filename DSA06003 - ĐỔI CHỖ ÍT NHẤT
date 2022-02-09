#include<iostream>
#include<string>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int M[100000];
		for (int i = 0; i < n; i++)
			cin >> M[i];
		int k,res = 0;
		for (int i = 0; i < n - 1; i++)
		{
			k = i;
			for (int j = i + 1; j < n; j++)
				if (M[j] < M[k])
					k = j;
			if (k != i)
				res++;
			swap(M[k], M[i]);
		}
		cout << res << endl;
	}
}

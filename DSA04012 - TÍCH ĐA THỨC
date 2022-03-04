#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
typedef pair<int, int> p;
int main(){
    int t; cin >> t;
    while (t--) {
        int m, n; cin >> m >> n;
        p M[100], N[100];
        for (int i = 0; i < m; i++) {
            cin >> M[i].first;
            M[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> N[i].first;
            N[i].second = i;
        }
        vector<p> X;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                X.push_back({ M[i].first * N[j].first,M[i].second + N[j].second });
            }
        }
        for (int i = 0; i < m + n-1; i++) {
            int sum = 0;
            for (auto x : X) {
                if (x.second == i)sum += x.first;
            }
            cout << sum << " ";
        }
        cout << endl;
    }
}

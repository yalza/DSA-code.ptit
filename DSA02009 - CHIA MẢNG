#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<string>
#include<queue>
using namespace std;
vector<string> res;
int n,k;
int M[1000];
bool ok,check[100];
void Try(int cnt, int sum,int summ) {
    if (ok)return;
    if (cnt == k) {
        ok = true;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!check[i]) {
            check[i] = true;
            if (sum == summ / 3) {
                Try(cnt + 1, 0, summ);
                return;
            }
            else if (sum < summ / 3)Try(cnt, sum + M[i], summ);
            else return;
           
        }
         check[i] = false;
    }
}
int main() {
    int t; cin >> t;
    while(t--){
        cin >> n>>k;
        ok = false;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> M[i];
            sum += M[i];
            check[i] = false;
        }
        if (sum % k != 0)cout << 0 << endl;
        else {
            Try(0, 0, sum);
            if (ok)cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}

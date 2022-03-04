#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int n, x, minn = 1e9; cin >> n;
    int s[2][100000];
    memset(s, 0, sizeof(s));
    for (int i = 0; i < n; i++) {
        cin >> x;
        minn = min(x, minn);
        s[0][1]++;
        s[1][1] += x;
        for (int j = 2; j <= x / 2; j++) {
            if (x / j != x / (j - 1)) {
                s[0][x / j]++;
                s[1][x / j] += j;
            }
        }
    }
    for (int i = minn; i > 0; i--) {
        if (s[0][i] == n) {
            cout << s[1][i];
            break;
        }
    }
}

#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        long long* a = new long long[x];
        long long* b = new long long[y];
        long long* c = new long long[z];
        //long long a[x], b[y], c[z];
        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < y; i++) {
            cin >> b[i];
        }
        for (int i = 0; i < z; i++) {
            cin >> c[i];
        }
        long long d[100000];
        long h = 0;
        long k = 0;
        int check = 0;
        for (int i = 0; i < x; i++) {
            for (int j = k; j < y; j++) {
                if (a[i] == b[j]) {
                    d[h] = a[i];
                    h++;
                    check = 1;
                    break;
                }
                else if (b[j] > a[i]) {
                    k = j;
                    break;
                }
            }
        }
        if (check == 0) {
            cout << "-1";
        }
        else {
            k = 0;
            for (long i = 0; i < h; i++) {
                for (long j = k; j < z; j++) {
                    if (d[i] == c[j]) {
                        cout << d[i] << " ";
                        check = 2;
                        break;
                    }
                    else if (c[j] > d[i]) {
                        k = j;
                        break;
                    }
                }
            }
            if (check == 1 || check == 0) {
                cout << "-1";
            }
        }
        cout << endl;
    }
    return 0;
}

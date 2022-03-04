#include <iostream>
using namespace std;
long long a, b, c, d;
#define MOD 1000000007
void Fibo(int n, long long M[])
{
    if (n == 0) {
        M[0] = 0;
        M[1] = 1;
        return;
    }
    Fibo((n / 2), M);
    a = M[0];
    b = M[1];
    c = 2 * b - a;
    if (c < 0)
        c += MOD;
    c = (a * c) % MOD;
    d = (a * a + b * b) % MOD;
    if (n % 2 == 0) {
        M[0] = c;
        M[1] = d;
    }
    else {
        M[0] = d;
        M[1] = c + d;
    }
}
int main()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long M[2] = { 0,1 };
        Fibo(n, M);
        cout << M[0] << endl;
    }
}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
ll coso(string s) {
    ll x=0;
    for (auto z: s) {
        x = x * 2 + (z - '0');
    }
    return x;
}
int main()
{
    int t; cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << (ll)(coso(a)*coso(b)) << endl;
    }
}

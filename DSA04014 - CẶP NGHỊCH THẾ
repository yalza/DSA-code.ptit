#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
typedef long long ll;
int n;
ll merge(ll M[], ll N[], int left, int mid, int right)
{
    int i, j, k;
    ll res = 0;
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (M[i] <= M[j]) {
            N[k++] = M[i++];
        }
        else {
            N[k++] = M[j++];
            res += mid - i;
        }
    }
    while (i <= mid - 1)
        N[k++] = M[i++];
    while (j <= right)
        N[k++] = M[j++];
    for (i = left; i <= right; i++)
        M[i] = N[i];

    return res;
}
ll _mergeSort(ll M[], ll N[], int left, int right)
{
    ll mid, res = 0;
    if (right > left) {
        mid = (right + left) / 2;
        res += _mergeSort(M, N, left, mid);
        res += _mergeSort(M, N, mid + 1, right);
        res += merge(M, N, left, mid + 1, right);
    }
    return res;
}
int main()
{
    int t; cin >> t;
    while (t--) {
        cin >> n;
        ll N[100000];
        ll M[100000];
        for (int i = 0; i < n; i++) {
            cin >> M[i];
        }
        ll res = _mergeSort(M, N, 0, n-1);
        cout << res << endl;
    }
}

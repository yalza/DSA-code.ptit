#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int n;
int merge(int M[], int N[], int left, int mid, int right)
{
    int i, j, k;
    int res = 0;
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
int _mergeSort(int M[], int N[], int left, int right)
{
    int mid, res = 0;
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
    cin >> n;
    int N[10000];
    int M[10000];
    int B[10000];
    for (int i = 0; i < n; i++) {
        cin >> M[i];
        if (M[i] % 2 == 1) {
        }
    }
    int g = 0;
    for (int i = 0; i < n; i++) {
        if (M[i] % 2 == 0) {
            B[g] = M[i];
            g++;
        }
    }
    int res = _mergeSort(B, N, 0, g - 1);
    int cnt = 0;
    M[n] = 1;
    for (int i = 1; i <= n; i++) {
        if (M[i] % 2 == 0 && M[i - 1] % 2 == 0)cnt++;
        else if(M[i]%2==1&&M[i-1]%2==0){
         
            res-= _mergeSort(M, N, i-1-cnt, i-1);
            cnt = 0;
        }
    }
    cout << res << endl;
}

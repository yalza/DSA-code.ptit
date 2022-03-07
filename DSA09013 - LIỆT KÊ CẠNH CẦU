#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
bool chuaxet[1005];
vector<int> k[1005];
vector< pair<int, int> > s;
vector< pair<int, int> > ans;
int v, e, res;
void dfs(int u) {
    chuaxet[u] = true;
    for (int i = 0; i < k[u].size(); i++) {
        int h = k[u][i];
        if (chuaxet[h] == false) {
            dfs(h);
        }
    }
}
void reset() {
    for (int i = 0; i < 1005; i++)
        k[i].clear();
    memset(chuaxet, false, 1005);
}
int tplt() {
    int dem = 0;
    for (int i = 1; i <= v; i++) {
        if (chuaxet[i] == false) {
            dem++;
            dfs(i);
        }
    }
    return dem;
}
void canhcau(int canh) {
    int dem = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i != canh) {
            k[s[i].first].push_back(s[i].second);
            k[s[i].second].push_back(s[i].first);
        }
    }
    dem = tplt();
    if (dem > res) {
        if (s[canh].first < s[canh].second) ans.push_back({ s[canh].first,s[canh].second });
        else ans.push_back({ s[canh].second,s[canh].first });
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> v >> e;
        reset();
        s.clear();
        ans.clear();
        int start, end;
        for (int i = 0; i < e; i++) {
            cin >> start >> end;
            s.push_back({ start,end });
            k[start].push_back(end);
            k[end].push_back(start);
        }
        res = tplt();
        for (int i = 0; i < s.size(); i++) {
            reset();
            canhcau(i);
        }
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << " ";
        }
        cout << endl;
    }
}

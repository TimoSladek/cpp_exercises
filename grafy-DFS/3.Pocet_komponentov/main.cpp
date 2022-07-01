#include<bits/stdc++.h>

using namespace std;

int n;
set<int> ms;
vector<vector<int> > sused;
vector<bool> cerveny;

void dfs(int Z) {
    cerveny[Z] = true;
    ms.insert(Z);
    for (int i = 0; i < sused[Z].size(); i++) {
        if (!cerveny[sused[Z][i]]) {
            dfs(sused[Z][i]);
        }
    }
}

int main() {
    int x, y, m, final = 0;
    cin >> n >> m;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    sused.resize(n);
    cerveny.resize(n);

    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x--;
        y--;
        sused[x].push_back(y);
        sused[y].push_back(x);
    }

    for (int i = 0; i < n; ++i) {
        if (ms.count(i) == 0) {
            dfs(i);
            final++;
        }
    }
    cout << final << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int n, final = 0, a;
set<int> ms, npl;
vector<vector<int> > sused;
vector<bool> cerveny;

void dfs(int Z) {
    cerveny[Z] = true;
    if (Z != 0 && sused[Z].size() == 1) {
        final++;
        if (npl.count(a) == 0) {
            ms.insert(a);
        }
    } else {
        if (ms.count(a) == 1)ms.erase(a);
        npl.insert(a);
    }
    for (int i = 0; i < sused[Z].size(); i++) {
        if (!cerveny[sused[Z][i]]) {
            a = Z;
            dfs(sused[Z][i]);
        }
    }
}

int main() {
    int x, y;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    sused.resize(n);
    cerveny.resize(n);

    for (int i = 0; i < n - 1; ++i) {
        cin >> x >> y;
        x--;
        y--;
        sused[x].push_back(y);
        sused[y].push_back(x);
    }
    dfs(0);
    cout << final + ms.size() << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y;
    int a, b;
    cin >> n >> m;
    set<int> ms;
    vector<int> final;

    vector<vector<int> > kam(n);

    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x--;
        y--;
        kam[x].push_back(y);
        kam[y].push_back(x);
    }

    cin >> a;
    a--;
    ms.insert(a);

    for (int i = 0; i < kam[a].size(); ++i) {
        ms.insert(kam[a][i]);
    }

    for (int i = 0; i < kam[a].size(); ++i) {
        b = kam[a][i];
        for (int j = 0; j < kam[b].size(); ++j) {
            if (ms.count(kam[b][j]) == 0) {
                ms.insert(kam[b][j]);
                final.push_back(kam[b][j]);
            }
        }
    }

    if (!final.empty()) {
        sort(final.begin(), final.end());
        for (int i = 0; i < final.size(); ++i) {
            cout << final[i] + 1 << endl;
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}
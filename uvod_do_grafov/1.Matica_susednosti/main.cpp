#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int> > tabulka(n, vector<int>(n, 0));
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        tabulka[a][b] = 1;
        tabulka[b][a] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j != 0) cout << " ";
            cout << tabulka[i][j];
        }
        cout << endl;
    }
    return 0;
}
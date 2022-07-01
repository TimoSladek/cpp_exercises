#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y;
    int a, b;
    cin >> n >> m;

    vector<vector<int> > kam(n);

    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        x--;
        y--;
        kam[x].push_back(y);
        kam[y].push_back(x);
    }

    cin >> a >> b;
    a--;
    b--;

    if (a == b) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> vzdialenost(n, -1);
    queue<int> q;

    q.push(a);
    vzdialenost[a] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < (int) kam[v].size(); i++) {
            int w = kam[v][i];
            if (vzdialenost[w] != -1) {
                continue;
            }
            vzdialenost[w] = vzdialenost[v] + 1;
            if (w == b) {
                cout << vzdialenost[w] << endl;
                return 0;
            }
            q.push(w);
        }
    }
    cout << -1 << endl;
    return 0;
}
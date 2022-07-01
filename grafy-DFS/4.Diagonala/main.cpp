#include<bits/stdc++.h>

using namespace std;

int n, final = 0, a = 0;
vector<vector<int> > sused;
vector<bool> cerveny;

void dfs(int Z) {
    cerveny[Z] = true;
    for (int i = 0; i < sused[Z].size(); i++) {
        if (!cerveny[sused[Z][i]]) {
            a++;
            if (a > final) {
                final = a;
            }
            dfs(sused[Z][i]);
        }
    }
    a--;
}

int main() {
    int x, y, max = 0;
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
    vector<int> vysledok(n);
    for (int i = 0; i < n; ++i) {
        final = 0;
        a = 0;
        for (int j = 0; j < n; ++j) {
            cerveny[j] = false;
        }
        dfs(i);
        vysledok[i] = final;
    }
    for (int i = 0; i < n; ++i) {
        if (vysledok[i] > max) {
            max = vysledok[i];
        }
    }
    cout << max << endl;
    return 0;
}
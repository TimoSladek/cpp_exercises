#include<bits/stdc++.h>

using namespace std;

vector<int> p, h;

int findSet(int i) {
    if(p[i] == i)return i;
    return (p[i] = findSet(p[i]));
}

bool isSameSet(int i, int j) {
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
    if (!isSameSet(i, j)) {
        int x = findSet(i), y = findSet(j);
        if (h[x] > h[y]) p[y] = x;
        else {
            p[x] = y;
            if (h[x] == h[y]) h[y]++;
        }
    }
}

int main() {
    int n, q, x, y;
    string st;
    cin >> n >> q;
    h.resize(n, 0);
    p.resize(n);
    for (int i = 0; i < n; ++i) {
        p[i] = i;
    }
    for (int i = 0; i < q; ++i) {
        cin >> st >> x >> y;
        if (st == "odhrab") {
            unionSet(x, y);
        } else {
            if (isSameSet(x, y))cout << "ANO" << endl;
            else cout << "NIE" << endl;
        }
    }
    return 0;
}
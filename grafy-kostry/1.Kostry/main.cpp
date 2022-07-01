#include<bits/stdc++.h>

using namespace std;

vector<int> p, h;
vector<pair<int, pair<int, int> > > E;
int n, m;

int findSet(int i) {
    if (p[i] == i)return i;
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

int minKostra() {
    int mst_sum = 0;
    sort(E.begin(), E.end());
    for (auto &i: E) {
        if (!isSameSet(i.second.first, i.second.second)) {
            mst_sum += i.first;
            unionSet(i.second.first, i.second.second);
        }
    }
    return mst_sum;
}

int maxKostra() {
    int mst_sum = 0;
    sort(E.begin(), E.end(), greater<>());
    for (auto &i: E) {
        if (!isSameSet(i.second.first, i.second.second)) {
            mst_sum += i.first;
            unionSet(i.second.first, i.second.second);
        }
    }
    return mst_sum;
}

int main() {
    int x, y, w;
    cin >> n >> m;
    h.resize(n, 0);
    p.resize(n);
    for (int i = 0; i < n; ++i) {
        p[i] = i;
    }
    for (int i = 0; i < m; ++i) {
        cin >> x >> y >> w;
        x--;
        y--;
        E.emplace_back(w, make_pair(x, y));
    }
    cout << minKostra() << " ";
    for (int i = 0; i < n; ++i) {
        h[i] = 0;
        p[i] = i;
    }
    cout << maxKostra() << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> G;
vector<int> V;
int n, m;

void dijkstra_s_haldou(int a) {
    V.resize(n, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<> > D;
    D.push({0, a});
    while (!D.empty()) {
        while (!D.empty() && V[D.top().second] != -1) D.pop();
        if (D.empty()) break;
        int v = D.top().second;
        int vzd = D.top().first;
        V[v] = vzd;
        for (int i = 0; i < G[v].size(); i++) {
            int w = G[v][i].first, dlz = G[v][i].second;
            if (V[w] != -1) continue;
            D.push({vzd + dlz, w});
        }
    }
}

int main() {
    int x, y, dlzka, a, b;
    cin >> n >> m;
    G.resize(n);
    for (int i = 0; i < m; ++i) {
        cin >> x >> y >> dlzka;
        x--;
        y--;
        G[x].push_back(make_pair(y, dlzka));
        G[y].push_back(make_pair(x, dlzka));
    }
    cin >> a >> b;
    a--;
    b--;
    dijkstra_s_haldou(a);
    cout << V[b] << endl;
    return 0;
}
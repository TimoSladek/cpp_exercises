#include <bits/stdc++.h>

using namespace std;

int n, m;

bool in(int x, int y) {
    if (x < 0 || y < 0 || x >= n || y >= m) return false;
    return true;
}

int main() {
    int x, y;
    cin >> n >> m;
    vector<string> arr;
    string st;
    queue<pair<pair<int, int>, int> > q;
    set<pair<int, int> > ms;
    for (int i = 0; i < n; ++i) {
        cin >> st;
        arr.push_back(st);
    }
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] == 'S') {
                q.push({{i, j}, 0});
                ms.insert({i, j});
            }
        }
    }
    while (!q.empty()) {
        pair<pair<int, int>, int> top = q.front();
        x = top.first.first;
        y = top.first.second;
        int vz = top.second;
        q.pop();
        if (arr[x][y] == 'F') {
            cout << vz << endl;
            return 0;
        }
        if (in(x, y + 1) && arr[x][y + 1] != '#' && ms.count({x, y + 1}) == 0) {
            q.push({{x, y + 1}, vz + 1});
            ms.insert({x, y + 1});
        }
        if (in(x, y - 1) && arr[x][y - 1] != '#' && ms.count({x, y - 1}) == 0) {
            q.push({{x, y - 1}, vz + 1});
            ms.insert({x, y - 1});
        }
        if (in(x - 1, y) && arr[x - 1][y] != '#' && ms.count({x - 1, y}) == 0) {
            q.push({{x - 1, y}, vz + 1});
            ms.insert({x - 1, y});
        }
        if (in(x + 1, y) && arr[x + 1][y] != '#' && ms.count({x + 1, y}) == 0) {
            q.push({{x + 1, y}, vz + 1});
            ms.insert({x + 1, y});
        }
    }
    cout << -1 << endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m;
    vector<vector<int> > arr(n);
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0; j < arr[i].size(); ++j) {
            if (j != 0) cout << " ";
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
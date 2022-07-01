#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll n, m, q, a, b, c, d;
    cin >> n >> m;
    ll ar[n][m];
    ll arr[n + 1][m + 1];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i <= n; i++) arr[i][0] = 0;
    for (int j = 0; j <= m; j++) arr[0][j] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j] + ar[i - 1][j - 1] - arr[i - 1][j - 1];
        }
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> a >> b >> c >> d;
        if (a == c && b == d) cout << ar[a - 1][b - 1] << endl;
        else cout << arr[c][d] - arr[a - 1][d] - arr[c][b - 1] + arr[a - 1][b - 1] << endl;
    }
    return 0;
}
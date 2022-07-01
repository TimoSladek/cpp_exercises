# include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, n, q, sucet = 0;
    cin >> n;
    vector<int> arr(n), pre;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        sucet += arr[i];
        pre.push_back(sucet);
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> a >> b;
        a--;
        b--;
        if (a == 0) {
            cout << pre[b] << endl;
        } else {
            cout << pre[b] - pre[a - 1] << endl;
        }
    }
    return 0;
}
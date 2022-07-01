#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        arr.push_back(a[i]);
    }
    cin >> m;
    vector<int> b(m);
    for (int k = 0; k < m; ++k) {
        cin >> b[k];
        arr.push_back(b[k]);
    }
    sort(arr.begin(), arr.end());
    for (int j = 0; j < n + m; ++j) {
        if (j != 0) {
            cout << " ";
        }
        cout << arr[j];
    }
    cout << endl;
    return 0;
}
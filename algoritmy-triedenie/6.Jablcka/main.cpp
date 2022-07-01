#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = 0; j < n; ++j) {
        if (a[j] < p) {
            cout << a[j] << " ";
        }
    }
    cout << endl;
    for (int k = 0; k < n; ++k) {
        if (a[k] == p) {
            cout << a[k] << " ";
        }
    }
    cout << endl;
    for (int l = 0; l < n; ++l) {
        if (a[l] > p) {
            cout << a[l] << " ";
        }
    }
    cout << endl;
    return 0;
}
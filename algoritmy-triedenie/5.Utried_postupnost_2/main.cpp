#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int j = 0; j < n; ++j) {
        if (j != 0) {
            cout << " ";
        }
        cout << a[j];
    }
    cout << endl;
    return 0;
}
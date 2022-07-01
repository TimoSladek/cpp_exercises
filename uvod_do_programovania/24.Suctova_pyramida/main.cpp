#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - (i + 1); ++j) {
            if (j != 0)cout << " ";
            cout << a[j] + a[j + 1];
            a[j] += a[j + 1];
        }
        cout << endl;
    }
    return 0;
}
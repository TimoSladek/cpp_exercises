#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c = 0, k = 0, bc = 0, bk = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] == c) {
            k += 1;
        }
        if (a[i] > c) {
            c = a[i];
            k = 1;
        }
        if (k > bk) {
            bc = c;
            bk = k;
        }
    }
    cout << bc << " " << bk << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, b = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> m(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        m[i] = a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        if (a[i] != m[i]) {
            b += 1;
        }
        if (b == 3) {
            cout << "neMaja" << endl;
            return 0;
        }
    }
    cout << "Maja" << endl;
    return 0;
}
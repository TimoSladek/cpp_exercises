#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x, s;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i] - x == a[j] || a[i] + x == a[j]) {
                cout << "Ano" << endl;
                return 0;
            }
        }
    }
    cout << "Nie" << endl;
    return 0;
}
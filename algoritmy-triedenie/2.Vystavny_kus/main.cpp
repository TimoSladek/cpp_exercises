#include "bits/stdc++.h"

using namespace std;

int main() {
    int n, naj = 100000, arr = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < naj) {
            naj = a[i];
            arr = i;
        }
    }
    swap(a[arr], a[0]);
    for (int j = 0; j < n; ++j) {
        if (j != 0) {
            cout << " ";
        }
        cout << a[j];
    }
    cout << endl;
    return 0;
}
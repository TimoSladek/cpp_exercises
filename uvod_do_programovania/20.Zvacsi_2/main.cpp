#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; ++i) {
        if (i != 0)cout << " ";
        cout << a[i] + x;
    }
    cout << endl;
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, x = 0, s;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    s = a[0];
    for (int i = 0; i < n; ++i) {
        if (a[i] == s)x = x + 1;
        if (a[i] < s)s = a[i];
        if (a[i] < s)x = 1;
    }
    cout << x << endl;
    return 0;
}
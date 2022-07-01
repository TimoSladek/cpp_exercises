#include <bits/stdc++.h>

using namespace std;

int find(int x) {
    for (int j = 2; j * j <= x; ++j) {
        if (x % j == 0) return j;
    }
    return x;
}


int main() {
    int x, n, q;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        q = 0;
        cin >> x;
        cout << x << " =";
        while (x != 1) {
            int res = find(x);
            x = x / res;
            if (q == 0) {
                cout << " " << res;
            } else {
                cout << " x " << res;
            }
            q++;
        }
        cout << endl;
    }
    return 0;
}
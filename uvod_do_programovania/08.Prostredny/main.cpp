#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    if (n < m && n > a || n > m && n < a) {
        cout << n << endl;
    }
    if (m < n && m > a || m > n && m < a) {
        cout << m << endl;
    }
    if (a < m && a > n || a > m && a < n) {
        cout << a << endl;
    }
    return 0;
}
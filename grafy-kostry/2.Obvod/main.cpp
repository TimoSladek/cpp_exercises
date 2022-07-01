#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum = 0, x, y;
    cin >> n;
    vector<int> a, b;
    do {
        a.resize(n);
        b.resize(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; ++i) {
            if (i + 1 == n) {
                x = a[i] - a[0];
                y = b[i] - b[0];
                x *= x;
                y *= y;
                sum += sqrt(x + y);
            } else {
                x = a[i] - a[i + 1];
                y = b[i] - b[i + 1];
                x *= x;
                y *= y;
                sum += sqrt(x + y);
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
        sum = 0;
        cin >> n;
    } while (n != 0);
    return 0;
}
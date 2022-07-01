#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, p = 0, s = 0, b, c = 0;
    cin >> n;
    vector<int> a(n);
    queue<int> q;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());
    for (int i = n - 1; i >= 0; --i) {
        q.push(a[i]);
    }
    if (s % 2 == 0) {
        b = s / 2;
        for (int i = 0; i < n; ++i) {
            p += q.front();
            q.pop();
            c += 1;
            if (p > b) {
                cout << c << endl;
                return 0;
            }
        }
    }
    if (s % 2 != 0) {
        b = (s + 1) / 2;
        for (int i = 0; i < n; ++i) {
            p += q.front();
            q.pop();
            c += 1;
            if (p >= b) {
                cout << c << endl;
                return 0;
            }
        }
    }
    return 0;
}
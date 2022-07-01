#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, q, a, b, c, d, e;
    cin >> n >> k >> q;
    e = k;
    deque<int> dq;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        dq.push_back(a);
    }
    for (int i = 0; i < q; ++i) {
        cin >> b;
        for (int j = 0; j < k; ++j) {
            if (j == 0) {
                if ((n - b) < k) {
                    d = n - b;
                    k = d + 1;
                }
            }
            if (j == 0)c = dq.at(b - 1);
            if (dq.at(b - 1) < c)c = dq.at(b - 1);
            b++;
        }
        cout << c << endl;
        k = e;
    }
    return 0;
}
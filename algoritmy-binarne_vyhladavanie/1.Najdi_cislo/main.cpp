#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, q, mid;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> q;
    int x;
    for (int i = 0; i < q; ++i) {
        cin >> x;
        int start = 0, end = n - 1;
        while (end >= start) {
            mid = (start + end) / 2;
            if (a[mid] == x) {
                cout << mid << endl;
                break;
            }
            if (a[mid] > x) {
                end = mid - 1;
            }
            if (a[mid] < x) {
                start = mid + 1;
            }
            if (start > end) {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
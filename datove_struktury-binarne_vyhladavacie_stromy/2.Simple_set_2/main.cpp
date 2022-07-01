#include "bits/stdc++.h"

#define ll long long

using namespace std;

int main() {
    ll n, a, b;
    cin >> n;
    set<ll> myset;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a == 1 && myset.count(b) == 0) {
            cout << "NO" << endl;
        }
        if (a == 1 && myset.count(b) != 0) {
            cout << "YES" << endl;
        }
        if (a == 2) {
            myset.insert(b);
        }
        if (a == 3) {
            myset.erase(b);
        }
    }
    return 0;
}
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll n, a;
    cin >> n;
    set<ll> myset;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (myset.count(a) == 0) {
            myset.insert(a);
        } else {
            myset.erase(a);
        }
    }
    auto first = myset.begin();
    cout << *first << endl;
    return 0;
}
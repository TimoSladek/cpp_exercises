#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        cout << __gcd(a, b) << endl;
    }
    return 0;
}
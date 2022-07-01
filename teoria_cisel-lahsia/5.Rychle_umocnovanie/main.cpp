#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll umocni(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

int main() {
    ll n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        cout << umocni(a, b, c) << endl;
    }
    return 0;
}
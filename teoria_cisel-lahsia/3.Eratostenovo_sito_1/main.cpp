#include<bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> prvocisla;

void Eratosten(int n) {
    vector<bool> zlozene(n + 1, false);
    zlozene[0] = zlozene[1] = true;
    for (ll i = 2; i <= n; i++) {
        if (zlozene[i])
            continue;

        prvocisla.push_back(i);

        for (long long k = i * i; k <= n; k += i)
            zlozene[k] = true;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    Eratosten(b);
    for (long long i: prvocisla) {
        if (i >= a) {
            cout << i << endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ll t, a;
    bool je = true;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a;
        for (int j = 2; j <= sqrt(a); ++j) {
            if (a % j == 0) {
                je = false;
                break;
            }
        }
        if (a == 1) {
            je = false;
        }
        if (je) {
            cout << "ANO" << endl;
        } else {
            cout << "NIE" << endl;
        }
        je = true;
    }
    return 0;
}
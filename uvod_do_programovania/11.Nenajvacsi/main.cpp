#include<bits/stdc++.h>

using namespace std;

int main() {
    int n[5], m = 0, a = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> n[i];
        if (n[i] > m)m = n[i];
        a += n[i];
    }
    a -= m;
    cout << a << endl;
    return 0;
}
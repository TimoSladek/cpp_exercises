#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "nulove" << endl;
    }
    if (n > 0) {
        cout << "kladne" << endl;
    }
    if (n < 0) {
        cout << "zaporne" << endl;
    }
    return 0;
}

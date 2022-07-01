#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool je, ji;
    je = true;
    ji = true;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] > a[i]) {
            je = false;
        }
    }
    for (int i = 1; i < n; ++i) {
        if (a[i - 1] < a[i]) {
            ji = false;
        }
    }
    if (je || ji) {
        cout << "poriadok" << endl;
    } else {
        cout << "bordel" << endl;
    }
    return 0;
}
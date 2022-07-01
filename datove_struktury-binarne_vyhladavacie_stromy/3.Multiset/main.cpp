#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    multiset<int> ms;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a == 1) {
            cout << ms.count(b) << endl;
        }
        if (a == 2) {
            ms.insert(b);
        }
        if (a == 3) {
            auto itr = ms.find(b);
            if (itr != ms.end()) {
                ms.erase(itr);
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b;
    priority_queue<int> queue;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a == 1) {
            queue.push(b);
        }
        if (a == 0 && !queue.empty()) {
            queue.pop();
        }
        if (!queue.empty()) {
            cout << queue.top() << endl;
        } else {
            cout << "empty" << endl;
        }
    }
    return 0;
}
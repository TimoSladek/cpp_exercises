#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, i = -1;
    string st;
    priority_queue<pair<pair<int, int>, int> > pq;
    while (true) {
        cin >> st;
        if (st == "pacient") {
            cin >> a >> b;
            pq.push(make_pair(make_pair(b, i), a));
        }
        if (st == "koniec") {
            break;
        }
        if (st == "dalsi") {
            if (!pq.empty()) {
                pair<pair<int, int>, int> top = pq.top();
                cout << top.second << endl;
                pq.pop();
            } else {
                cout << -1 << endl;
            }
        }
        i--;
    }
    return 0;
}
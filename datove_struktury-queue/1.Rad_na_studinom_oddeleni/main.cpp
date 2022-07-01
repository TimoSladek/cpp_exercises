#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, naj = 0, a = -1, b;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    vector<pair<int, int> > vect;
    queue<int> myq, q;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
        vect.emplace_back(make_pair(x[i], y[i]));
    }
    if (n == 1)cout << 0 << endl;
    if (n == 1) return 0;
    sort(vect.begin(), vect.end());
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            b = vect[i].first + vect[i].second;
        }
        if (vect[i].first <= a) {
            myq.push(vect[i].first);
            q.push(vect[i].second);
        }
        if (!q.empty() && vect[i].first > b) {
            b += q.front();
            myq.pop();
            q.pop();
        }
        if (q.empty() && vect[i].first > b)b += vect[i].second;
        if (i != 0) {
            if (q.empty() && vect[i].first <= (vect[i - 1].first + vect[i - 1].second)) {
                myq.push(vect[i].first);
                q.push(vect[i].second);
            }
        }
        if (myq.size() > naj)naj = myq.size();
        if (!q.empty() && vect[i].first == b) {
            b += q.front();
            myq.pop();
            q.pop();
        }
        if (q.empty() && vect[i].first == b)b += vect[i].second;
        a += vect[i].second;
        if (i == 0)a += vect[i].first;
    }
    cout << naj << endl;
    return 0;
}
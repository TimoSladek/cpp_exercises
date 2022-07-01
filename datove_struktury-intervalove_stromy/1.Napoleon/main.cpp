#include<bits/stdc++.h>

using namespace std;

vector<int> st_small, st_big, A;
int n;

int left(int p) {
    return p * 2;
}

int right(int p) {
    return (p * 2) + 1;
}

void build_small(int p, int L, int R) {
    if (L == R) {
        st_small[p] = L;
    } else {
        build_small(left(p), L, (L + R) / 2);
        build_small(right(p), (L + R) / 2 + 1, R);
        int p1 = st_small[left(p)], p2 = st_small[right(p)];
        if (A[p1] <= A[p2]) {
            st_small[p] = p1;
        } else {
            st_small[p] = p2;
        }
    }
}

void build_big(int p, int L, int R) {
    if (L == R) {
        st_big[p] = L;
    } else {
        build_big(left(p), L, (L + R) / 2);
        build_big(right(p), (L + R) / 2 + 1, R);
        int p1 = st_big[left(p)], p2 = st_big[right(p)];
        if (A[p1] >= A[p2]) {
            st_big[p] = p1;
        } else {
            st_big[p] = p2;
        }
    }
}

int rmq_small(int p, int L, int R, int i, int j) {
    if (i > R || j < L) return -1;
    if (L >= i && R <= j)return st_small[p];

    int p1 = rmq_small(left(p), L, (L + R) / 2, i, j);
    int p2 = rmq_small(right(p), (L + R) / 2 + 1, R, i, j);

    if (p1 == -1) return p2;
    if (p2 == -1) return p1;
    if (A[p1] <= A[p2]) {
        return p1;
    } else {
        return p2;
    }
}

int rmq_small(int i, int j) {
    return rmq_small(1, 0, n - 1, i, j);
}

int rmq_big(int p, int L, int R, int i, int j) {
    if (i > R || j < L) return -1;
    if (L >= i && R <= j)return st_big[p];

    int p1 = rmq_big(left(p), L, (L + R) / 2, i, j);
    int p2 = rmq_big(right(p), (L + R) / 2 + 1, R, i, j);

    if (p1 == -1) return p2;
    if (p2 == -1) return p1;
    if (A[p1] >= A[p2]) {
        return p1;
    } else {
        return p2;
    }
}

int rmq_big(int i, int j) {
    return rmq_big(1, 0, n - 1, i, j);
}

int main() {
    int T, m, a, b, index, index2;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> n;
        A.resize(n);
        st_small.assign(n * 4, 0);
        st_big.assign(n * 4, 0);
        for (int j = 0; j < n; ++j) {
            cin >> A[j];
        }
        build_small(1, 0, n - 1);
        build_big(1, 0, n - 1);
        cin >> m;
        for (int j = 0; j < m; ++j) {
            cin >> a >> b;
            a--;
            b--;
            index = rmq_small(a, b);
            index2 = rmq_big(a, b);
            cout << A[index] << " " << A[index2] << endl;
        }
    }
    return 0;
}
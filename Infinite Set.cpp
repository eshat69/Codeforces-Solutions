## Problem D. Infinite Set

http://codeforces.com/contest/1635/problem/D
289307413	Nov/02/2024 00:42UTC+6	eshat69	D - Infinite Set	C++17 (GCC 7-32)	Accepted	780 ms	10900 KB
### Code (C++):

#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
const int D = 1e9 + 7;
int n, p;
int a[N];
int f[N];
set<int> s;
int main() {
    cin >> n >> p;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 1; i <= n; i++) {
        int x = a[i];
        bool v = false;
        while (x) {
            if (x & 1) {
                x /= 2;
            } else if (x % 4 != 0) {
                break;
            } else {
                x /= 4;
            }
            if (s.count(x)) {
                v = true;
            }
        }
        if (!v) {
            f[(int)log2(a[i]) + 1]++;
        }
    }

    int A = 0;
    for (int i = 1; i <= p; i++) {
        (f[i + 1] += f[i]) %= D;
        (f[i + 2] += f[i]) %= D;
        (A += f[i]) %= D;
    }
    cout << A;
    return 0;
}


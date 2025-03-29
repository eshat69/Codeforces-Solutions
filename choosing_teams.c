## Problem A. Choosing Teams

https://codeforces.com/contest/432/problem/A
227816690	Oct/12/2023 19:14UTC+6	eshat69	A - Choosing Teams	GNU C11	Accepted	31 ms	0 KB
### Code (C):


#include <stdio.h>
int main() {
    int n, k, s = 0, v;
    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d", &v);
        if (5 - v >= k) {
            s++;
        }
    }
    printf("%d", s / 3);
    return 0;
}


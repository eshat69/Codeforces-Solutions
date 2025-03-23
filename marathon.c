## Problem A. Marathon

https://codeforces.com/contest/1692/problem/A
226562034	Oct/04/2023 15:13UTC+6	eshat69	A - Marathon	GNU C11	Accepted	46 ms	0 KB
### Code (C):
    
#include <stdio.h>
int main() {
    int t, a, b, c, d;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int count = 0;
        if (b > a) {
            count++;
        }
        if (c > a) {
            count++;
        }
        if (d > a) {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

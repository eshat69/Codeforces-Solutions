## Problem A. Mishka and Game

https://codeforces.com/contest/703/problem/A
226281011	Oct/02/2023 16:59UTC+6	eshat69	A - Mishka and Game	GNU C11	Accepted	30 ms	0 KB
### Code (C):
    
#include <stdio.h>
int main() {
    int n, m, c, s = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &m, &c);
        s += (m > c) - (m < c);
    }
    if (s > 0) {
        printf("Mishka\n");
    } else if (s == 0) {
        printf("Friendship is magic!^^\n");
    } else {
        printf("Chris\n");
    }
    return 0;
}


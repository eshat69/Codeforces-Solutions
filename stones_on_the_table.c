## Problem A. Stones on the Table

https://codeforces.com/contest/266/problem/A
223332219	Sep/14/2023 16:43UTC+6	eshat69	A - Stones on the Table	GNU C11	Accepted	30 ms	0 KB
### Code (C):

#include <stdio.h>
int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    char s[n + 1];
    scanf("%s", s);
    for (i=0; i<n - 1; i++) {
        if (s[i] == s[i + 1])
            count++ ;
    }
    printf("%d", count);
    return 0;
}


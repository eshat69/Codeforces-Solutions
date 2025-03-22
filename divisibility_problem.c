## Problem A. Divisibility Problem

https://codeforces.com/contest/1328/problem/A
225501749	Sep/27/2023 17:31UTC+6	eshat69	A - Divisibility Problem	GNU C11	Accepted	46 ms	3900 KB
### Code (C):
#include <stdio.h>
int main() {
    int n, a, b, result;
    scanf("%d",&n);
    while (n--) {
        scanf("%d %d", &a, &b);
        result = (b - (a % b)) % b;
        printf("%d\n", result);
    }
    return 0;
}


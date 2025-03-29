## Problem A - Holiday Of Equality

https://codeforces.com/contest/758/problem/A
227236843	Oct/09/2023 00:01UTC+6	eshat69	A - Holiday Of Equality	GNU C11	Accepted	15 ms	0 KB
### Code (C):


#include <stdio.h>
int i, j, m, n, h;
int main() {
    
    scanf("%d", &n);
    m = 0;
    h = 0;
    for (i = 1; i <= n; i++) {
        scanf("%d", &j);
        m += j; // Accumulate the sum of 'j' in 'm'
        if (j > h) {
            h = j; // Update 'h' with the maximum value of 'j'
        }
    }
    printf("%d", n * h - m);

    return 0;
}



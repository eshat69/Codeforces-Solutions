## Problem 	A - Police Recruits

https://codeforces.com/contest/427/problem/A
226152783	Oct/01/2023 17:25UTC+6	eshat69	A - Police Recruits	GNU C11	Accepted	31 ms	0 KB
### Code (C):
    
#include <stdio.h>
int main() {
    int n, s = 0, t, crime = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);

        if (t > 0) {
            s += t;
        } else {
            if (s > 0) {
                s--;
            } else {
                crime++;
            }
        }
    }

    printf("%d\n", crime);
    return 0;
}

## Problem A - Dislike of Threes

https://codeforces.com/contest/1560/problem/A
226863902	Oct/06/2023 17:09UTC+6	eshat69	A - Dislike of Threes	GNU C11	Accepted	31 ms	0 KB
### Code (C):

#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int k;
        scanf("%d",&k);
        int i = 1 , j = 0;
        for (i = 1; j < k; i++) {
            if (i % 3 != 0 && i % 10 != 3) {
                j++;
            }
        }
        printf("%d\n", i - 1);
    }
    return 0;
}


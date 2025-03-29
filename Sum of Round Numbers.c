## Problem A. Sum of Round Numbers

https://codeforces.com/contest/1352/problem/A
227713752	Oct/11/2023 23:03UTC+6	eshat69	A - Sum of Round Numbers	GNU C11	Accepted	233 ms	0 KB
### Code (C):


#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t); 
    while (t--) {
        int n;
        int a[6]; 
        int x = 0; 
        int y = 1; 
        scanf("%d", &n);
        for (; n > 0; y *= 10, n /= 10) {
            if ((a[x] = (n % 10) * y) > 0) {
                x++;
            }
        }
        printf("%d\n", x);
        for (int i = 0; i < x; i++) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}

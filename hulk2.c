## Problem A. Hulk

https://codeforces.com/contest/705/problem/A
225068101	Sep/25/2023 17:35UTC+6	eshat69	A - Hulk	GNU C11	Accepted	30 ms	0 KB
### Code (C):
#include<stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    printf("I hate");
    for (i = 1; i < n; i++) {
        printf(i & 1 ? " that I love" : " that I hate");
    }
    printf(" it");
    return 0;
}


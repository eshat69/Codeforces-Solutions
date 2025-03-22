## Problem A. Anton and Letters

https://codeforces.com/contest/443/problem/A
225770707	Sep/29/2023 17:49UTC+6	eshat69	A - Anton and Letters	GNU C11	Accepted	15 ms	0 KB
### Code (C):

#include <stdio.h>
int main() {
    int arr[26] = {0} ,i, count = 0 ;
    char c;
    while (1) {
        scanf("%c", &c);
        if (c == '}') {
            break;
        }
        if (c >= 'a' && c <= 'z' && c != ',') {
            arr[c - 'a'] = 1;
        }
    }
    for ( i = 0; i < 26; i++) {
        if (arr[i]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}


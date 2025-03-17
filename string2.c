## Problem A. Way Too Long Words

https://codeforces.com/contest/71/problem/A
223049656	Sep/12/2023 13:37UTC+6	eshat69	A - Way Too Long Words	GNU C11	Accepted	15 ms	0 KB
### Code (C):

#include<stdio.h>
#include<string.h>
int main () {
    char arr[100];
    int n, i, l;
    scanf("%d", &n);

    while (n--) {
        scanf("%s", arr);
        l = strlen(arr);
        if (l <= 10) {
            printf("%s\n", arr);
        } else {
            printf("%c%d%c\n", arr[0], l - 2, arr[l - 1]);
        }
    }
    return 0;
}

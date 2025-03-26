#include <stdio.h>
int i, j, m, n, h;
int main() {
    scanf("%d", &n);
    m = 0;
    h = 0;
    for (i = 1; i <= n; i++) {
        scanf("%d", &j);
        m += j;
        if (j > h) {
            h = j;
        }
    }
    printf("%d", n * h - m);
    return 0;
}


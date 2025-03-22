#include<stdio.h>
int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i % 2 == 0 || (i % 4 == 1 && j == 0) || (i % 4 == 3 && j == m - 1)) {
                printf("#");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}

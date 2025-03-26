#include <stdio.h>
int main() {
    int n, k, s = 0, v;
    scanf("%d %d", &n, &k);
    while (n--) {
        scanf("%d", &v);
        if (5 - v >= k) {
            s++;
        }
    }
    printf("%d", s / 3);
    return 0;
}


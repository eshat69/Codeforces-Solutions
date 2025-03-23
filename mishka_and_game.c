#include <stdio.h>
int main() {
    int n, m, c, s = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &m, &c);
        s += (m > c) - (m < c);
    }
    if (s > 0) {
        printf("Mishka\n");
    } else if (s == 0) {
        printf("Friendship is magic!^^\n");
    } else {
        printf("Chris\n");
    }
    return 0;
}


#include <stdio.h>
int main() {
    int n, a, b, result;
    scanf("%d",&n);
    while (n--) {
        scanf("%d %d", &a, &b);
        result = (b - (a % b)) % b;
        printf("%d\n", result);
    }
    return 0;
}


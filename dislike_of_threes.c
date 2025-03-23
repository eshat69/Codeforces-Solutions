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


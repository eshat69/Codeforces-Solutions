#include <stdio.h>
int main() {
    int n, s = 0, t, crime = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);

        if (t > 0) {
            s += t;
        } else {
            if (s > 0) {
                s--;
            } else {
                crime++;
            }
        }
    }

    printf("%d\n", crime);
    return 0;
}

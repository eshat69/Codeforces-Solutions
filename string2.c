
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

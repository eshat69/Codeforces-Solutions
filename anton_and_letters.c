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


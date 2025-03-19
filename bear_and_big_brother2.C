#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    double result = log(b / a) / log(1.5) + 1;
    int intResult = (int)result;
    printf("%d\n", intResult);
    return 0;
}

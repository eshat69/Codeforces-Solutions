## Problem 4A: A. Bear and Big Brother

https://codeforces.com/contest/791/problem/A
/223469929	Sep/15/2023 17:14UTC+6	eshat69	A - Bear and Big Brother	GNU C11	Accepted	31 ms	0 KB
### Code (C):

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

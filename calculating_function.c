## Problem A. Calculating Function

http://codeforces.com/contest/486/problem/A
224735725	Sep/23/2023 17:08UTC+6	eshat69	A - Calculating Function	GNU C11	Accepted	31 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    long long n , sum ;
    scanf("%lld",&n);
    if(n%2==0){
        sum= n/2 ;
    }else {
        sum = ((n+1)/2)*(-1) ;
    }
    printf("%lld",sum) ;
    return 0 ;
}

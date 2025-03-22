## Problem A. Is your horseshoe on the other hoof?

https://codeforces.com/contest/228/problem/A
225240389	Sep/26/2023 16:20UTC+6	eshat69	A - Is your horseshoe on the other hoof?	GNU C11	Accepted	60 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    int a,b,c,d,horseshoes ;
    scanf("%d%d%d%d",&a,&b,&c,&d) ;
    horseshoes = (a==b || a==c || a==d) + (b==c || b==d) + (c==d) ;
    printf("%d",horseshoes) ;
    return 0 ;
}

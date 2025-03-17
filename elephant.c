## Problem A. Elephant

https://codeforces.com/contest/617/problem/A
223049656	Sep/12/2023 13:37UTC+6	eshat69	A - Way Too Long Words	GNU C11	Accepted	15 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    int n , s ;
    scanf("%d",&n);
    s = n/5 ;
    if(n%5==0){
        printf("%d",s);
    } else {
        printf("%d",s+1);
    }
    return 0 ;
}

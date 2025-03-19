
## Problem A. Tram

https://codeforces.com/contest/116/problem/A
// 224021213	Sep/19/2023 16:34UTC+6	eshat69	A - Tram	GNU C11	Accepted	62 ms	0 KB
### Code (C):

#include<stdio.h>
int main () {
    int n,i,a,b,pass=0, max=0 ;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++){
        scanf("%d%d",&a,&b);
        pass = b-a+pass ;
        if(max<pass)
            max=pass ;
    }
    printf("%d",max);
    return 0 ;
}

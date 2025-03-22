## Problem A. Vanya and Fence

https://codeforces.com/contest/677/problem/A
224151217	Sep/20/2023 16:54UTC+6	eshat69	A - Vanya and Fence	GNU C11	Accepted	15 ms	0 KB
### Code (C):

#include<stdio.h>
int main (){
    int n,h,i,w=0,temp ;
    scanf("%d%d",&n,&h);
    w=n ;
    for(i=0 ; i<n ; i++){
        scanf("%d",&temp);
        if(temp>h)
            w++ ;
    }
    printf("%d",w);
    return 0 ;
}

## Problem A. Presents

https://codeforces.com/contest/136/problem/A
224585636	Sep/22/2023 15:49UTC+6	eshat69	A - Presents	GNU C11	Accepted	62 ms	0 KB
### Code (C):
    
#include<stdio.h>
int main (){
    int n,i,temp ;
    scanf("%d",&n);
    int arr[n+1] ;
    for(i=1 ; i<=n ; i++){
        scanf("%d",&temp);
        arr[temp]=i ;
    }
    for(i=1 ; i<=n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}

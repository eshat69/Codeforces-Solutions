## Problem A. Insomnia cure

https://codeforces.com/contest/148/problem/A
225625756	Sep/28/2023 15:35UTC+6	eshat69	A - Insomnia cure	GNU C11	Accepted	62 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    int i,k,l,m,n,d,count = 0 ;
    scanf("%d%d%d%d%d",&k,&l,&m,&d,&n) ;
    for(i=1 ; i<=n ; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%d==0){
            count++ ;
        }
    }
    printf("%d",count) ;
    return 0 ;
}

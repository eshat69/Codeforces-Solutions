##  problem: (A) Soldier and Bananas

https://codeforces.com/contest/546/problem/A
// 223566809	Sep/16/2023 11:50UTC+6	eshat69	A - Soldier and Bananas	GNU C11	Accepted	15 ms	0 KB
### Code (C):

#include<stdio.h>
int main () {
    int k,n,w,total ;
    scanf("%d%d%d",&k,&n,&w);
    total = (w*(k+w*k))/2 ;
    if(total>n){
        printf("%d",total-n);
    } else {
        printf("0");
    }
    return 0 ;
}

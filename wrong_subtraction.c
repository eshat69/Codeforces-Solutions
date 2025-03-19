##  problem: (A) Wrong Subtraction

https://codeforces.com/contest/977/problem/A
// 223729624	Sep/17/2023 19:09UTC+6	eshat69	A - Wrong Subtraction	GNU C11	Accepted	15 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    int n,k,i ;
    scanf("%d %d",&n,&k);
    for(i=0 ; i<k ; i++){
        if(n%10==0)
            n=n/10 ;
        else
            n=n-1 ;
    }
    printf("%d",n);
    return 0 ;
}

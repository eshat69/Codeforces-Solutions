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

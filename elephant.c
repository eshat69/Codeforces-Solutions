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

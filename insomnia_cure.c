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

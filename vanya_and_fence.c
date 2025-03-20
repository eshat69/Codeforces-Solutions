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

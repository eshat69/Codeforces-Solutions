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

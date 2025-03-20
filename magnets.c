#include<stdio.h>
#include<stdio.h>
int main () {
    int n,i,group = 1 ;
    char a[3],b[3] ;
    scanf("%d",&n);
    scanf("%s",a);
    for(i=1 ; i<n ; i++){
        scanf("%s",b);
        if(a[0]!=b[0])
            group++ ;
        strcpy(a,b) ;
    }
    printf("%d",group);
    return 0 ;
}

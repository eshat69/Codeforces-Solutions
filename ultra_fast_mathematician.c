#include<stdio.h>
#include<string.h>
int main () {
    char a[101] , b[101] , result[101] ;
    scanf("%s %s",a,b);
    int i , length = strlen(a) ;
    for(i=0 ; i<length ; i++){
        if(a[i]!=b[i]){
            result[i]='1';
        } else {
            result[i]='0';
        }
    }
    result[length]='\0' ;
    printf("%s\n",result) ;
    return 0 ;
}


## Problem A. Ultra-Fast Mathematician

https://codeforces.com/contest/61/problem/A
224952736	Sep/24/2023 22:00UTC+6	eshat69	A - Ultra-Fast Mathematician	GNU C11	Accepted	30 ms	0 KB
### Code (C):

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


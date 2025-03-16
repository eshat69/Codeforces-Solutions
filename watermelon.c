## 222989274	Sep/11/2023 23:40UTC+6	eshat69	A - Watermelon	GNU C11	Accepted	30 ms	0 KB
http://codeforces.com/contest/4/problem/A

#include<stdio.h>
int main (){
    int w ;

    scanf("%d",&w);
    if(w%2==1){
        printf("NO");
    } else {
        if (w==2){
            printf("NO");
        } else {
            printf("YES");
        }
    }
    return 0 ;
}

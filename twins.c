## problem: (A) Twins

https://codeforces.com/contest/160/problem/A
// 2223829899	Sep/18/2023 17:41UTC+6	eshat69	A - Twins	GNU C11	Accepted	30 ms	0 KB
### Code (C):
#include<stdio.h>
int main (){
    int n,i,j,temp,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp ;
            }
        }
    }
    j=0;
    int coin=0;
    for(i=n-1 ; i>=0 ; i++){
        j=j+arr[i];
        coin++ ;
        if(j>sum/2)
            break ;
    }
    printf("%d",coin);
    return 0 ;
}

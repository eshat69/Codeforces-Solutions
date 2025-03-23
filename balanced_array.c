## Problem B. Balanced Array

https://codeforces.com/contest/1343/problem/B
226400857	Oct/03/2023 14:47UTC+6	eshat69	B - Balanced Array	GNU C11	Accepted	826 ms	0 KB
### Code (C):
	
#include<stdio.h>
int tc,n,i,j;
int main(){
	scanf("%d",&tc);
	while(tc--){
		scanf("%d",&n);
		if(n/2%2){
            printf("NO\n");
		} else{
			printf("YES\n");
			for(i=2;i<=n;i+=2)
                printf("%d ",i);
			for(j=1;j<n-2;j+=2)
			    printf("%d ",j);
			printf("%d\n",j+n/2);
		}
	}
}

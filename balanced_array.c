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

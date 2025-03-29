
## Problem D - Attribute Checks

https://codeforces.com/contest/2025/problem/D
289060992	Nov/01/2024 02:00UTC+6	eshat69	D - Attribute Checks	C++17 (GCC 7-32)	Accepted	515 ms	7900 KB
### Code (C++):


#include<bits/stdc++.h>
using namespace std;

int dp[5010],cnt;
int a[5010],b[5010];
int x[2000010];

int main(){
	int m,n;scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&x[i]);
		if(x[i]>0)a[x[i]]++;
		if(x[i]<0)b[-x[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(x[i]>0)a[x[i]]--;
		if(x[i]<0)b[-x[i]]--;
		if(x[i]==0){
			cnt++;
			for(int i=cnt;i>=0;i--){
				dp[i]=max(dp[i-1]+a[i],dp[i]+b[cnt-i]);
			}
		}
	}
	int ans=0;
	for(int i=0;i<=m;i++)ans=max(ans,dp[i]);
	printf("%d\n",ans);
}

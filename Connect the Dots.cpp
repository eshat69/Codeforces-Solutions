## Problem D. Connect the Dots

https://codeforces.com/contest/2020/problem/D
289303687	Nov/02/2024 00:23UTC+6	eshat69	D - Connect the Dots	C++17 (GCC 7-32)	Accepted	171 ms	15300 KB
### Code (C):


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 300000
int i,j,k,n,m,t,fa[N+50],f[N+50][12],res;
int find(int x){return fa[x]==x?x:fa[x]=find(fa[x]);}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=1;i<=n;i++){
			memset(f[i],0,sizeof(f[i]));
			fa[i]=i;
		}
		while(m--){
			cin>>i>>j>>k;
			f[i][j]=max(f[i][j],k);
		}
		for(i=1;i<=n;i++){
			for(j=1;j<=10&&i+j<=n;j++)if(f[i][j]){
				fa[find(i)]=find(i+j);
				f[i+j][j]=max(f[i+j][j],f[i][j]-1);
			}
		}
		res=0;
		for(i=1;i<=n;i++)res+=(i==find(i));
		cout<<res<<'\n';
	}
}

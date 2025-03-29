## Problem F. Kosuke's Sloth

https://codeforces.com/contest/2033/problem/F
288802354	Oct/30/2024 01:31UTC+6	eshat69	F - Kosuke's Sloth	C++17 (GCC 7-32)	Accepted	93 ms	100 KB
### Code (C++):


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=1e9+7;
int main()
{
    int T;cin>>T;
    while(T--)
	{
        ll n,k;
		cin>>n>>k;n%=M;
        ll a=1,b=0,c,p=1;
        while(a%k)c=a,a=(a+b)%k,b=c,p++;
        cout<<p*n%M<<endl;
    }
    return 0;
}

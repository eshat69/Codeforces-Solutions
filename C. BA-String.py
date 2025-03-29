## Problem C. BA-String

https://codeforces.com/contest/1620/problem/C
290557499	Nov/08/2024 20:49UTC+6	eshat69	C - BA-String	Python 3	Accepted	93 ms	7200 KB
### Code (python):

I=input
for _ in[0]*int(I()):
 n,k,x=map(int,I().split());x-=1;p='a';a=[[0,0]];i=0;r=''
 for y in I()[::-1]:
  if y!=p:p=y;a+=[[0,0]]*i;i^=1
  a[-1][i]+=1
 for u,v in a:m=k*v+1;r=x%m*'b'+u*'a'+r;x//=m
 print(r)

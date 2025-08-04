## Problem C. Permutation Game
 
https://codeforces.com/contest/1033/problem/C
309865094	Mar/11/2025 00:05UTC+6	eshat69	C - Permutation Game	Python 3	Accepted	312 ms	12600 KB
### Code (python):

n=int(input())
a=[*map(int,input().split())]
b=[0]*n
for i in range(n):b[n-a[i]]=i
s=[0]*n
for i,j in enumerate(b):i=n-i;s[j]='BA'[any(a[k]>a[j]and
s[k]=='B'for k in range(j%i,n,i))]
print(''.join(s))


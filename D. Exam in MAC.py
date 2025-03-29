## Problem D. Exam in MAC

https://codeforces.com/contest/1935/problem/D
290452850	Nov/08/2024 00:50UTC+6	eshat69	D - Exam in MAC	Python 3	Accepted	280 ms	35300 KB
### Code (python):

import sys
R = lambda: map(int, next(sys.stdin).split())
t,=R()
while t:
    t-=1
    n,c= R()
    *s, = R()
    ans = c*(c+1)//2+c
    d=[0]*2
    for i in range(n):
        ans -= (s[i]//2+(c-s[i])+1)
        d[s[i]%2] +=1
    print(1 + ans + d[0]*(d[0]-1)//2 +  d[1]*(d[1]-1)//2)

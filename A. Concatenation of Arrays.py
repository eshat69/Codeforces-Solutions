## Problem A. Concatenation of Arrays

https://codeforces.com/contest/2023/problem/A
288804943	Oct/30/2024 01:52UTC+6	eshat69	A - Concatenation of Arrays	Python 3	Accepted	687 ms	31600 KB
### Code (python):
R=lambda:[*map(int,input().split())]
for _ in[0]*R()[0]:
 for x in sorted((R()for _ in[0]*R()[0]),key=sorted):print(*x)

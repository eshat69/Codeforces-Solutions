## Problem E. Sakurako, Kosuke, and the Permutation

https://codeforces.com/contest/2033/problem/E
288804396	Oct/30/2024 01:48UTC+6	eshat69	E - Sakurako, Kosuke, and the Permutation	Python 3	Accepted	905 ms	125500 KB
### Code (python):


for s in[*open(0)][2::2]:
 a=[0,*map(int,s.split())];r=0
 for i in range(1,len(a)):
  m=-1
  while a[i]:a[i],i=0,a[i];m+=1
  r+=abs(m)//2
 print(r)

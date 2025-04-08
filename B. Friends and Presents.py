## Problem B - Friends and Presents

https://codeforces.com/contest/483/problem/B
291352867	Nov/13/2024 23:35UTC+6	eshat69	B - Friends and Presents	Python 3	Accepted	92 ms	0 KB
### Code (python):


a,b,x,y=map(int,input().split())
l,r=a+b,(a+b)*5
while l<r:
  v = (l+r)//2
  if v-v//x >= a and v-v//y >= b and v-v//(x*y) >= a+b:
    r = v
  else:
    l = v+1
print(r)

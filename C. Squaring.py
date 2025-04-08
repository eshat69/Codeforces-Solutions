## Problem C. Squaring

https://codeforces.com/contest/1995/problem/C
291082204	Nov/11/2024 21:25UTC+6	eshat69	C - Squaring	Python 3	Accepted	202 ms	20400 KB
### Code (python):

t = int(input())
for j in range(t):
	n = int(input())
	c=ans=0
	p=1
	for i in map(int, input().split()):
		while p<i and c:
			p*=p
			c-=1
		if i==1 and i<p:
			ans=-1
			break
		a=i
		while a<p:
			a*=a
			c+=1
		p=i
		ans+=c
	print(ans)

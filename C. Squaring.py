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

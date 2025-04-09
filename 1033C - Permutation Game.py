n=int(input())
a=[*map(int,input().split())]
b=[0]*n
for i in range(n):b[n-a[i]]=i
s=[0]*n
for i,j in enumerate(b):i=n-i;s[j]='BA'[any(a[k]>a[j]and
s[k]=='B'for k in range(j%i,n,i))]
print(''.join(s))
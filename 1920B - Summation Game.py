R=lambda:map(int,input().split())
t,=R()
while t:
 t-=1;n,k,x=R();a=[0]
 for y in sorted(R()):a+=a[-1]+y,
 print(max(2*a[max(i,x)-x]-a[i]for i in range(n-k,n+1)))
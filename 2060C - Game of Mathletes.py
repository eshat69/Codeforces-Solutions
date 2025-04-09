R=lambda:map(int,input().split())
t,=R()
while t:
 t-=1;n,k=R();a=sorted(R());r=i=0
 while i<n-1:s=a[i]+a[n-1];r+=s==k;i+=s<=k;n-=s>=k
 print(r)
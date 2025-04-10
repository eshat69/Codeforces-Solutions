R=lambda:map(int,input().split())
t,=R()
exec(t*"n,k=R();r=range(n);a=*R(),;k,i=max((min([(a[i]-a[j])%k for j in r if j^i]+[1]),i)for i in r);print(('NO',f'YES {i+1}')[k>0]);")
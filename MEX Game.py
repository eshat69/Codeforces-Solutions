for _ in range(int(input())):
    n=int(input())
    a=sorted(map(int,input().split()))
    li=[0]*n
    for i in a:li[i]+=1
    x=0
    ans=n
    for i in range(n):
        if(li[i]==0):ans=i;break
        if(li[i]==1):x+=1
        if(x==2):ans=i;break
    print(ans)
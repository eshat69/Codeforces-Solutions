from heapq import*
from collections import Counter as C
for _ in range(int(input())):
    n,a,r,p=int(input()),sorted(map(int,input().split())),0,[]
    for i in C(a).values():
        if r>=i:heappush(p,-i);r-=i
        else:
            if p and -p[0]>i:r-=heappop(p);heappush(p,-i);r-=i
            r+=1
    print(len(C(a))-len(p))
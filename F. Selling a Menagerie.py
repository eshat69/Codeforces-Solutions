## Problem F. Selling a Menagerie

https://codeforces.com/contest/1872/problem/F
292234781	Nov/19/2024 00:07UTC+6	eshat69	F - Selling a Menagerie	Python 3	Accepted	858 ms	36400 KB
### Code (python):

from sys import stdin, setrecursionlimit
# from math import gcd
# from collections import deque
from heapq import *

# from functools import lru_cache
input = stdin.readline
# setrecursionlimit(1000000)


for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    c = list(map(int, input().split()))

    d = {i: 0 for i in range(1, n + 1)}
    for i in range(n):
        d[a[i]] += c[i]

    ans = []
    h = []
    for k, v in d.items():
        heappush(h, [v, k])
    seen = set()
    while h:
        v, k = heappop(h)
        if k in seen:
            continue
        ans.append(k)
        seen.add(k)
        d[a[k - 1]] -= c[k - 1]
        heappush(h, [d[a[k - 1]], a[k - 1]])
        if len(seen) == n:
            break
    print(*ans)

import math
for tc in range(int(input())):
  n, k = map(int, input().split())
  a = list(map(int, input().split()))
  if n == 1:
    print(k-1 if k-1 < a[0] else k)
    continue
  g = 0
  for x in a:
    g = math.gcd(g, x)
  a = [g * i for i in range(n)] + [10**18]
  r = -1
  for i in range(n+1):
    if k <= a[i] - r - 1:
      break
    k -= max(a[i] - r - 1, 0)
    r = a[i]
  print(r + k)
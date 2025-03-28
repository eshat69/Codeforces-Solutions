R=lambda:[*map(int,input().split())]
for _ in[0]*R()[0]:
 for x in sorted((R()for _ in[0]*R()[0]),key=sorted):print(*x)
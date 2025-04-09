input()
w=1
for x in map(int,input().split()):
  w^=(x-1)%2
  print(w+1)
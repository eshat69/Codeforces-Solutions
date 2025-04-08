a,b,x,y=map(int,input().split())
l,r=a+b,(a+b)*5
while l<r:
  v = (l+r)//2
  if v-v//x >= a and v-v//y >= b and v-v//(x*y) >= a+b:
    r = v
  else:
    l = v+1
print(r)
for s in[*open(0)][2::2]:
 a=[0,*map(int,s.split())];r=0
 for i in range(1,len(a)):
  m=-1
  while a[i]:a[i],i=0,a[i];m+=1
  r+=abs(m)//2
 print(r)
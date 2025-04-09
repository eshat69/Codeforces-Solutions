for s in[*open(0)][2::2]:
 m=k=0
 for x in map(int,s.split()):m+=x;k+=x%2;print(m-k//3-k%3%2*(m>x))
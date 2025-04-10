for s in[*open(0)][2::2]:print(sorted(a:=s.split(),key=int)[len(a)//2])

for s in[*open(0)][2::2]:a=s.split();print('NYOE S'[any(a.count(x)%2for x in a)::2])


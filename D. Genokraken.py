ii = lambda: int(input())
def ask(u, v):
    print('?', u, v, flush=True)
    return ii()
for _ in range(ii()):
    n = ii()
    pa = [0] * n
    v = 2
    while ask(v, 1):
        v += 1
    pa[v] = 1
    v += 1
    u = 2
    while v < n:
        while ask(v, u):
            u += 1
        pa[v] = u
        u += 1
        v += 1
    print('!', *pa[1:], flush=True)

for _ in range(int(input())):
    n = int(input())
    m = [0] + sorted(set(map(int, input().split())))
    for i, j in zip(m, m[1:]):
        if i!=j-1: break
    print(['Alice', 'Bob'][i%2])
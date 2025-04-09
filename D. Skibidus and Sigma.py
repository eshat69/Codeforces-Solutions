
for _ in range(int(input())):
    n, m = map(int,input().split())
    arrays=[list(map(int,input().split())) for _ in range(n)]
    arrays.sort(key=sum,reverse = True)
    print(sum(arrays[i//m][i%m]*(n*m-i) for i in range(n*m)))
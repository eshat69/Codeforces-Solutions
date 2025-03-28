def cmp(x, y, z):
    return z > 30 or x < y * (1 << z)
def solve():
    n = int(input())
    a = list(map(int, input().split()))
    mod = 10 ** 9 + 7
    val = []
    ans = 0
    for i in range(n):
        x, y = a[i], 0
        while x % 2 == 0:
            x //= 2
            y += 1
        while val and cmp(val[-1][0], x, y):
            ans = (ans - val[-1][0] * pow(2, val[-1][1], mod) % mod + mod) % mod
            ans = (ans + val[-1][0]) % mod
            y += val[-1][1]
            val.pop()
        val.append((x, y))
        ans = (ans + val[-1][0] * pow(2, val[-1][1], mod)) % mod
        print(ans, end=' ')
    print()
t = int(input())
for _ in range(t):
    solve()
x, y = map(int, input().split())
a = [0] * (x + 1)

for _ in range(x - 1):
    u, v = map(int, input().split())
    a[v] = u

z = int(input())
count = 0

while (a[z] != 0):
    z = a[z]
    count += 1
print("Ron" if count % 2 or (x - count - 1) % 2 else "Hermione")
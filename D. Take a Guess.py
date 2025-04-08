## Problem D - Take a Guess

https://codeforces.com/contest/1556/problem/D
290777640	Nov/10/2024 01:16UTC+6	eshat69	D - Take a Guess	Python 3	Accepted	421 ms	0 KB
### Code (python):

n, k = map(int, input().split())
t = [0] * (n + 1)
for i in range(1, 4):
    t[i] = int(input(f"or {i} {i%3 + 1}\n")) + int(input(f"and {i} {i%3 + 1}\n"))
x = (t[1] + t[3] - t[2]) // 2
t[1:4] = x, t[1] - x, t[3] - x
for i in range(4, n + 1):
    t[i] = int(input(f"or {1} {i}\n")) + int(input(f"and {1} {i}\n")) - x
print("finish", sorted(t)[k])

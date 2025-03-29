## Problem A - Sakurako and Kosuke

https://codeforces.com/contest/2033/problem/A
287706345	Oct/24/2024 20:53UTC+6	eshat69	A - Sakurako and Kosuke	Python 2	Accepted	62 ms	0 KB
### Code (python):


t = int(input())
for _ in range(t):
    n = int(input())
    moves, position, turn = 1, 0, 0

    while abs(position) <= n:
        if turn == 0:
            position -= moves
        else:
            position += moves
        moves += 2
        turn ^= 1
    if turn == 1:
        print("Sakurako")
    else:
        print("Kosuke")

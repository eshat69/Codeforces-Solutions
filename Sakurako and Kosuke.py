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
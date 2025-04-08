## Problem J - Waiting for...

https://codeforces.com/contest/2038/problem/J
292203335	Nov/18/2024 20:39UTC+6	eshat69	J - Waiting for...	Python 3	Accepted	93 ms	0 KB
### Code (python):

def can_monocarp_board(n, events):
    waiting_people = 0
    result = []
    for event in events:
        type_, value = event.split()
        value = int(value)
        if type_ == "P":
            waiting_people += value
        elif type_ == "B":
            free_seats = value
            people_boarding = min(waiting_people, free_seats)
            waiting_people -= people_boarding
            remaining_seats = free_seats - people_boarding
            if remaining_seats > 0:
                result.append("YES")
            else:
                result.append("NO")

    return result


n = int(input())
events = [input().strip() for _ in range(n)]
output = can_monocarp_board(n, events)
print("\n".join(output))

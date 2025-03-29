## Problem A. Quintomania

https://codeforces.com/contest/2036/problem/A
289597895	Nov/02/2024 22:49UTC+6	eshat69	A - Quintomania	Python 3	Accepted	61 ms	0 KB
### Code (python):

# Number of test cases
t = int(input())

results = []


for _ in range(t):
    # Number of notes
    n = int(input())
    # Sequence of notes
    notes = list(map(int, input().split()))

    # Flag to check if the melody is perfect
    perfect = True

    # Check intervals between adjacent notes
    for i in range(n - 1):
        interval = abs(notes[i + 1] - notes[i])
        if interval != 5 and interval != 7:
            perfect = False
            break

    # Store the result for this melody
    results.append("YES" if perfect else "NO")

# Output all results
print("\n".join(results))

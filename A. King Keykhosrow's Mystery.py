from math import gcd
def find_smallest_key(t, test_cases):
    results = []
    for a, b in test_cases:
        lcm = (a * b) // gcd(a, b)
        results.append(lcm)
    return results
t = int(input())
test_cases = []
for _ in range(t):
    a, b = map(int, input().split())
    test_cases.append((a, b))
results = find_smallest_key(t, test_cases)
for res in results:
    print(res)
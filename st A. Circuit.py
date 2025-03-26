t = int(input().strip())
results = []
for _ in range(t):
    n = int(input().strip())
    switches = list(map(int, input().strip().split()))

    count_ones = sum(switches)
    max_lights_on = min(count_ones, 2 * n - count_ones)
    min_lights_on = count_ones % 2

    results.append(f"{min_lights_on} {max_lights_on}")

print("\n".join(results))
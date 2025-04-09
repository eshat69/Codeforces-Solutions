for _ in range(int(input())):
    s = input();
    n = len(s)
    a, b, ab, ba = map(int, input().split())
    a -= s.count('A');
    b -= s.count('B')
    old_ab = ab;
    old_ba = ba
    opt = [[], []]
    cnt = 1
    x = 0
    for i in range(1, n + 1):
        if i == n or s[i] == s[i - 1]:
            if cnt & 1:
                x += cnt // 2
            else:
                if s[i - 1] == 'A':
                    opt[1].append(cnt // 2)
                else:
                    opt[0].append(cnt // 2)
            cnt = 1
        else:
            cnt += 1
    opt = (sorted(opt[0]), sorted(opt[1]))
    ex_ab, ex_ba = 0, 0
    for l in opt[0]:
        if ab >= l:
            ab -= l
        else:
            l -= ab
            ab = 0
            ex_ba += max(0, l - 1)
    for l in opt[1]:
        if ba >= l:
            ba -= l
        else:
            l -= ba
            ba = 0
            ex_ab += max(0, l - 1)
    ab -= ex_ab;
    ba -= ex_ba
    if ab > 0:
        mn = min(ab, x)
        ab -= mn;
        x -= mn
    if ba > 0:
        mn = min(ba, x)
        ba -= mn;
        x -= mn
    ab = max(ab, 0);
    ba = max(ba, 0)
    d = (old_ab - ab) + (old_ba - ba)
    a += d;
    b += d

    if a >= 0 and b >= 0:
        print('YES')
    else:
        print('NO')
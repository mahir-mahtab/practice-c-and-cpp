def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    t = int(data[0])
    idx = 1
    for _ in range(t):
        n = int(data[idx])
        idx += 1
        s = data[idx]
        idx += 1
        cL = s.count('L')
        cI = s.count('I')
        cT = s.count('T')
        if cL == cI == cT:
            print(0)
            continue
        if all(ch == s[0] for ch in s):
            print(-1)
            continue
        found = False
        max_count = max(cL, cI, cT)
        for k in range(max_count, n + 2 * n + 1):
            m = 3 * k - n
            if m < 0:
                continue
            if m > 2 * n:
                break
            a = k - cL
            b = k - cI
            c = k - cT
            if a < 0 or b < 0 or c < 0:
                continue
            current = list(s)
            ops = []
            possible = True
            required = []
            required.extend(['L'] * a)
            required.extend(['I'] * b)
            required.extend(['T'] * c)
            for char in required:
                inserted = False
                for i in range(len(current) - 1):
                    left = current[i]
                    right = current[i + 1]
                    if left == right:
                        continue
                    if {left, right} == {'L', 'I'}:
                        inserted_char = 'T'
                    elif {left, right} == {'L', 'T'}:
                        inserted_char = 'I'
                    elif {left, right} == {'I', 'T'}:
                        inserted_char = 'L'
                    else:
                        continue
                    if inserted_char == char:
                        current.insert(i + 1, char)
                        ops.append(i + 1)
                        inserted = True
                        break
                if not inserted:
                    possible = False
                    break
            if possible:
                print(len(ops))
                for op in ops:
                    print(op)
                found = True
                break
        if not found:
            print(-1)

solve()
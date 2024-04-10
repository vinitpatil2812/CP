def max_sum_no_match(n, a1, a2, a3):
    a1.sort(reverse=True)
    a2.sort(reverse=True)
    a3.sort(reverse=True)

    result = 0
    for x in range(3):
        for y in range(3):
            for z in range(3):
                if a1[x][1] != a2[y][1] and a1[x][1] != a3[z][1] and a2[y][1] != a3[z][1]:
                    result = max(result, a1[x][0] + a2[y][0] + a3[z][0])
    print(result)

t_cases = int(input())
for _ in range(t_cases):
    size = int(input())
    arr1 = [(int(x), i + 1) for i, x in enumerate(input().split())]
    arr2 = [(int(x), i + 1) for i, x in enumerate(input().split())]
    arr3 = [(int(x), i + 1) for i, x in enumerate(input().split())]

    max_sum_no_match(size, arr1, arr2, arr3)

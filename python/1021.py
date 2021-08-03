n, m = input().split()
n = int(n)
m = int(m)
list = list(map(int,input().split()))

q = []
for i in range(n):
    q.append(i + 1)

t = 0
current = 1
removed = []
for i in range(m):
    index = list[i]

    left_off = 0
    for j in removed:
        if (((j > current) and (j < index)) or ((j > index) and (j < current))):
            left_off = left_off + 1
    right_off = len(removed) - left_off  

    l = abs(current - index)
    r = n - l
    # print("l : " + str(l))
    # print("r : " + str(r))

    # print("left_off : " + str(left_off))
    # print("right_off : " + str(right_off))
    if (l - left_off > r - right_off):
        t = t + r - right_off
    else:
        t = t + l - left_off

    current = q[int((q.index(index) + 1) % len(q))]
    # print("current = " + str(current))
    q.remove(index)
    removed.append(index)


print(t)

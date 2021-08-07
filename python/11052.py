import sys

n = int(sys.stdin.readline())

price = list(map(int,sys.stdin.readline().split()))

max_price = [0 for i in range(n + 1)]

max_price[1] = price[0]

for j in range(2,n + 1):
    max_comb = 0
    for i in range(1,j):
        max_comb = max(max_comb,max_price[i] + max_price[j - i])
        # print(max_comb)

    max_price[j] = max(max_comb,price[j - 1])
    # print(max_price)

print(max_price[n])


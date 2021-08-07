import sys

n = int(sys.stdin.readline())

arr = [0 for j in range(1001)]

for i in range(1,n + 1):
    if (i == 1):
        arr[i] = i
        continue
    if (i == 2):
        arr[i] = 3
        continue

    arr[i] = arr[i - 1] + arr[i - 2] * 2

print(arr[n] % 10007)
    
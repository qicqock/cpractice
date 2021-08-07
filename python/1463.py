import sys

n = int(sys.stdin.readline())

arr = [0 for j in range(n + 1)]

for i in range(2,n + 1):
    if ((i % 2 == 0)):
        arr[i] = min(arr[i // 2],arr[i - 1])

    if ((i % 3 == 0) and (i > 2)):
        arr[i] = min(arr[i // 3],arr[i - 1])
    else: 
        arr[i] = arr[i - 1]
        
    arr[i] += 1

print(arr)


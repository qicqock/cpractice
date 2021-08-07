import sys

t = int(sys.stdin.readline())

list = []
for i in range(t):
    list.append(int(sys.stdin.readline()))

arr = [0 for j in range(11)]
arr[1] = 1
arr[2] = 2
arr[3] = 4

for j in range(4,11):
    arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3]
        
for i in range(t):
    n = list[i]
    print(arr[n])
                                        
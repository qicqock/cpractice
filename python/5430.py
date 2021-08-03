import sys

t = int(sys.stdin.readline())

list = []
for i in range(t):
    inner_list = []
    for j in range(3):
        inner_list.append(sys.stdin.readline().strip())
    list.append(inner_list)

for i in range(t):
    command = list[i][0]
    arr = eval(list[i][2])
    n = int(list[i][1])
    R_check = 0
    lremove = 0
    rremove = 0

    for j in range(len(command)):
        if (command[j] == "R"):
            if (R_check == 0):
                R_check = 1
            else:
                R_check = 0
        else:   
            if (R_check == 0):
                lremove = lremove + 1
            else:
                rremove = rremove + 1

    if (lremove + rremove > n):
        print("error")
        continue

    arr = arr[lremove:n - rremove]
    if (R_check == 1):
        arr.reverse()

    print(str(arr).replace(" ",""))
import sys

n = int(sys.stdin.readline())

command = []
for i in range(n):
    command.append(sys.stdin.readline().split())

deck = []
for i in range(n):
    if (len(command[i]) == 2):
        if (command[i][0] == "push_front"):
            deck.insert(0,command[i][1])
        else:
            deck.append(command[i][1])
    else:
        if (command[i][0] == "size"):
            print(len(deck))
        elif (command[i][0] == "empty"):
            if (len(deck) == 0): print("1")
            else: print("0")
        else:
            if (len(deck) == 0):
                print("-1")    
            elif (command[i][0] == "pop_front"):
                print(deck.pop(0))
            elif (command[i][0] == "pop_back"):
                print(deck.pop())
            elif (command[i][0] == "front"):
                print(deck[0])
            elif (command[i][0] == "back"):
                print(deck[-1])

n= int(input("enter n : "))
for i in range(1, n):
    for s in range (1, n-i+1):
        print("  ",end="")
    for j in range(1, (2*i)):
        print("* ",end="")
    print()
for i in range(n, 0, -1):
    for space in range(0, n-i):
        print("  ", end="")
    for j in range(0, 2*i-1):
        print("* ", end="")
    print()

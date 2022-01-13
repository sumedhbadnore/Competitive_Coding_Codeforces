def unique(y):
    arr = []
    for i in range(0,4):
        n = y%10
        arr.append(n)
        y = y//10

    l1 = list(set(arr))
    l1.sort()
    arr.sort()
    if l1 == arr:
       return True
    else:
       return False

year = int(input())
for i in range (year+1, 9999):
    if unique(i) == True:
        print(i)
        break
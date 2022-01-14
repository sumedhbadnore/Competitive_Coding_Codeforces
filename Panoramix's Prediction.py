def isPrime(n):
    count = 0
    for i in range (2,(n//2 + 1)):
        if n%i == 0:
            count += 1
            break
    if count == 0 and n != 1:
        return True
    else:
        return False

x,y = map(int, input().split())
nearest = 0
for n in range(x+1, y+1):
    if isPrime(n) == True:
        nearest = n
        break
if isPrime(y) == True and y == nearest:
    print("YES")
else:
    print("NO")
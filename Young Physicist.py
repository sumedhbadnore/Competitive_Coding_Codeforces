xsum = 0
ysum = 0
zsum = 0
n = int(input())

for i in range (0,n):
    x,y,z = map(int, input().split())
    xsum += x
    ysum += y
    zsum += z

if xsum == 0 and ysum == 0 and zsum == 0:
    print("YES")
else:
    print("NO")

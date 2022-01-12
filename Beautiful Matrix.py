global ival, jval
for i in range (0,5):
    temp = list(map(int,input().split()))
    for j in range (0,5):
        if temp[j] == 1:
            ival = i+1
            jval  = j+1
        j+=1
    i += 1

istep = abs(3 - ival)
jstep = abs(3 - jval)
print(istep+jstep)


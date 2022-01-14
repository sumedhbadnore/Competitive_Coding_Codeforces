inp1 = input()        
inp2 = input()

for i in range(0, len(inp1)):
    if inp1[i] == inp2[i]:
        print(0, end="")
    else:
        print(1,end="")
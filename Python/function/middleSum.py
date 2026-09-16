
    

b=[3,2,1,2]
size=int(input("Enter number of elements you want to enter : "))
'''print("Enter elements : ")
for i in range(size):
    a=int(input())
    b.append(a)'''


for i in range(size):
    sumLeft=0
    sumRight=0
        
    for j in range(b[i]):
         sumLeft+=b[i]
    for k in range(size-1,b[i],-1):
        sumRight+=b[k]
    if(sumLeft==sumRight):
        print("Middle number : ",b[i])
        break
    else:
        print("Not middle")






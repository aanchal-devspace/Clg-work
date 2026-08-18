print("aanchal")
num=[25,78,-56,0,-68,23,-14]
print("1.positive numbers\n2.negative numbers\n ")
choice=int(input("Enter your choice : "))
for i in range(len(num)-1):
    if(choice==1):
        if(num[i]>0):
            print(num[i],end=" ")
    elif(choice==2):
        if(num[i]<0):
            print(num[i],end=" ")
    else:
        print("Invalid choice ")
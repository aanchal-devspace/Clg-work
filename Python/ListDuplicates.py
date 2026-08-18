print("aanchal")
num=[25,78,90,57,78,25,86]
num.sort()
print(num)
print("List after removing duplicates : ",end=" ")
for i in range(len(num)):
    if(num[i-1]!=num[i]):
        print(num[i],end=" ")
    



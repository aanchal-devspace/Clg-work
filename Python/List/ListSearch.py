print("aanchal")
num=[25,78,90,57,78,25,90,86]
search= int(input("enter element to search : "))
print("element found at index : ",end=" ")
for i in range(len(num)):
    if(num[i]==search):
        print(i,end=" ")
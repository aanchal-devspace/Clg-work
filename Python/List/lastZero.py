num=[]
size=int(input("Enter number of elements you want to enter :"))
print("Enter element : ")
for i in range(size):
   a=int(input())
   num.append(a)


for j in range (len(num)):
    if(num[j]==0):
      for i in range(1,len(num)):
        if(num[i-1]==0):
          c=num[i-1]
          num[i-1]=num[i]
          num[i]=c
print(num)

        
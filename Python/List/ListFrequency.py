print("AANCHAL")
num=[25,78,90,57,25,78,25,86]
num.sort()
count=1
for i in range(len(num)):
    if(num[i-1]==num[i]):
        count+=1
    else:
        print(f"count of {num[i-1]} is : {count} ")
        count=1
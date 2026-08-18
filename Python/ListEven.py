print("aanchal")
num=[14,25,34,49,23,56,78,90]
even=0
odd=0
for i in range(len(num)):
    if (num[i]%2 ==0):
        even+=1
    else:
        odd+=1   
print(f"even : {even}, odd : {odd}")
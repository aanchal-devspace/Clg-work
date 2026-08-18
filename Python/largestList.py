print("AANCHAL")
num=[14,56,97,34]
print("smallest in list is : ",min(num))
small=num[0]
for i in range(len(num)):
    if num[i] < small:
        small = num[i]
print("smallest element is : ",small)
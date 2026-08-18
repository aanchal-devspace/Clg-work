print("aanchal")
num=[25,78,90,57,78,25,90,86]
num.sort()
largest=num[len(num)-1]
num.remove(largest)
large=num[0]
for i in range (len(num)-1):
    if num[i]>large:
        large=num[i]
print("largest is : ",large)


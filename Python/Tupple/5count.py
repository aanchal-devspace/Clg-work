print("aanchal")
a=(12,23,34,768,94,23,89,537,90,12)
count=0
val = int(input("Enter number to count : "))

for i in range(len(a)) :
    if(a[i]==val):
        count+=1
print(f"The count of {val} is {count}")
    

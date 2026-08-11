#check if number is prime or not
print("AANCHAL")
a = int(input("Enter number : "))
count=0
for i in range(1,a+1):
    if(a%i == 0) :
        count+=1
if(count == 2):
    print("Prime")
else:
    print("Not prime")      
'''output :
Enter number : 13
Prime
'''  
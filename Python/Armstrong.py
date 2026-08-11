#check if the given number is armstrong or not 
print("Aanchal")
num = int(input("Enter number : "))
count=0
num1=num
while num!=0:
    count+=1
    num//=10

num2=num1
ans=0
while num1 != 0:
    rem = num1%10
    ans += pow(rem,count) 
    num1//=10

if(ans == num2):
    print("Armstrong")
else:
    print("Not armstrong")    
'''output :
Enter number : 153
Armstrong '''
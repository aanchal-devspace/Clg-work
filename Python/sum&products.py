#find sum and product of digits of a given number 
print("AANCHAL") 
num=int(input("Enter a number : "))
sum=0
product=1
while num!=0:
    r=num%10
    sum+=r
    product*=r
    num//=10
print("The sum and product is : ",sum,product)
'''output :
Enter a number : 852
The sum and product is :  15 80
'''
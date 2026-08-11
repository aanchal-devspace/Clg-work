#find the smallest digit of number
print("AANCHAL")
num=int(input("Enter number : "))
smallest=10
while num!=0:
    r=num%10
    if(r<smallest):
        smallest=r
    num//=10
print("The smallest digit is : ",smallest) 
'''output :
Enter number : 562145
The smallest digit is :  1
'''   
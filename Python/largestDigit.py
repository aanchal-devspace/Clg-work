#print the largest digit of number 
print("AANCHAL")
num=int(input("Enter number : "))
largest=0
while num!=0:
    r=num%10
    if(r>largest):
        largest=r
    num//=10
print("The largest digit is : ",largest)    

"""Output: Enter a number : 60
The sum and product is :  6 0"""
#count the digit if given number
print("AANCHAL")
num=int(input("Enter a number : "))
count=0
while num!=0 :
    count+=1
    num//=10

print("The digits in given number is ",count)    
'''output :
Enter a number : 741256
The digits in given number is  6'''
#find if the number is palindrome or not
print("AANCHAL")
num = int(input("Enter number : "))
num1=num
rev=0
while num !=0 :
    r =num%10
    rev=rev*10+r
    num//=10
if(rev == num1):
    print("Palindrome")
else:
    print("Not palindrome")

'''output :
Enter number : 159
Not palindrome
'''
        
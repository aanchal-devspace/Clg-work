print("aanchal")
a=int(input("Enter a number : "))
b=int(input("Enter second number : "))
print("1.Add\n2.substract\n3.multiply\n4.Division\n5.Remainder")
def add(a,b):
    return a+b
def subs(a,b):
    return a-b
def multiply(a,b):
    return a*b
def divide(a,b):
    return a/b
def mod(a,b):
    return a%b
choice=int(input("Enter your choice : "))
if(choice==1):
    print("addition :",add(a,b))
elif(choice==2):
    print("Substraction : ",subs(a,b))
elif(choice==3):
    print("Multiplication : ",multiply(a,b))
elif(choice==4):
    print("Division : ",divide(a,b))

elif(choice==5):
    print("Reaminder : ",mod(a,b))

else:
    print("Invalid choice")




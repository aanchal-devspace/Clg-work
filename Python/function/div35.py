num=int(input("Enter a number : "))
def divide(n):
    if(n%3==0):
        if(n%5==0):
            print(f"{n} is divisible by 3 and 5 both ")
        else:
            print(f"{n} is divisble by 3 but not from 5 ")
    elif(n%5==0):
        print(f"{n} is divisble by 5")
    else:
        print(f"{n} is not divisible by both ")
divide(num)
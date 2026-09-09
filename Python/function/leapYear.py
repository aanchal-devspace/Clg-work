num= int(input("Enter a number : "))
def leap(a):
    if(a%4==0 and a%100==0):
        print("Leap")
    else:
        print("Not leap")
leap(num)
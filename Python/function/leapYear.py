print("aanchal")
num= int(input("Enter a year : "))
def leap(a):
    if(a%4==0 and a%100!=0 or a%400==0):
        print("Leap")
    else:
        print("Not leap")
leap(num)